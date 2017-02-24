# Sets the minimum version of CMake required to build the native
# library. You should either keep the default value or only pass a
# value of 3.4.0 or lower.

cmake_minimum_required(VERSION 3.4.1)

# Creates and names a library, sets it as either STATIC
# or SHARED, and provides the relative paths to its source code.
# You can define multiple libraries, and CMake builds it for you.
# Gradle automatically packages shared libraries with your APK.

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -O3")

add_library( # Sets the name of the library.
             native-lib-rs

             # Sets the library as a shared library.
             SHARED

             # Provides a relative path to your source file(s).
             # Associated headers in the same location as their source
             # file are automatically included.
             src/main/cpp/native-lib.cpp)

# Searches for a specified prebuilt library and stores the path as a
# variable. Because system libraries are included in the search path by
# default, you only need to specify the name of the public NDK library
# you want to add. CMake verifies that the library exists before
# completing its build.

find_library( # Sets the name of the path variable.
              log-lib

              # Specifies the name of the NDK library that
              # you want CMake to locate.
              log )

# Specifies libraries CMake should link to your target library. You
# can link multiple libraries, such as libraries you define in the
# build script, prebuilt third-party libraries, or system libraries.

target_link_libraries( # Specifies the target library.
                       native-lib-rs
                       -landroid
                       -ljnigraphics
                       -ldl

                       # Links the target library to the log library
                       # included in the NDK.
                       ${log-lib} )


###########################
# find RenderScript Library
###########################
set(LIBRS_ROOT ${CMAKE_SOURCE_DIR}/./libs/renderscript/prebuilt/darwin-x86_64/platform)

add_library(LIB_RSCPP_STATIC STATIC IMPORTED)
set_target_properties(LIB_RSCPP_STATIC PROPERTIES IMPORTED_LOCATION
    ${LIBRS_ROOT}/${ANDROID_ABI}/libRScpp_static.a)

add_library(LIB_COMPILER_RT STATIC IMPORTED)
set_target_properties(LIB_COMPILER_RT PROPERTIES IMPORTED_LOCATION
    ${LIBRS_ROOT}/${ANDROID_ABI}/libcompiler_rt.a)

add_library(LIB_RSSUPPORT SHARED IMPORTED)
set_target_properties(LIB_RSSUPPORT PROPERTIES IMPORTED_LOCATION
    ${LIBRS_ROOT}/${ANDROID_ABI}/libRSSupport.so)

add_library(LIB_RSSUPPORTIO SHARED IMPORTED)
set_target_properties(LIB_RSSUPPORTIO PROPERTIES IMPORTED_LOCATION
    ${LIBRS_ROOT}/${ANDROID_ABI}/libRSSupportIO.so)

add_library(LIB_BLASV8 SHARED IMPORTED)
set_target_properties(LIB_BLASV8 PROPERTIES IMPORTED_LOCATION
    ${LIBRS_ROOT}/${ANDROID_ABI}/libblasV8.so)


target_include_directories(native-lib-rs PRIVATE
                           ${LIBRS_ROOT}/rs)

target_link_libraries(native-lib-rs
                      LIB_RSCPP_STATIC
                      LIB_COMPILER_RT
                      LIB_RSSUPPORT
                      LIB_RSSUPPORTIO
                      LIB_BLASV8)

