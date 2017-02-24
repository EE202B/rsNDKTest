# RenderScript with NDK
Enable calling RenderScript in NDK. Build with Gradle + CMake in Android Studio. **Currently only support running Intrinsic Scripts.**

## Notice
 * Download the latest r14-beta-2 version of NDK from [NDK Wiki](https://github.com/android-ndk/ndk/wiki)
 * Edit the `ndk.dir` in `local.properties` to the directory of the new downloaded NDK
 * Edit the `rs_root` according to your machine (TODO: remove this)
 * Change the name of the `rs_root/arm` folder in NDK to `armeabi-v7a` (TODO: remove this)
 * Include header `<cpp/RenderScript.h>`. Then you can add your `ScriptIntrinsic` in your jni cpp.
 
## Issue
Currently, you still cannot launch your custom `.rs` kernels from NDK using this way. If you want to do this, you need to build your rs scripts with `ndk-build`. Then link to your Android Studio project as a shared library. There is an example for this case: [rs-hello-compute](https://android.googlesource.com/platform/ndk/+/master/tests/build/rs-hello-compute/jni/). 
