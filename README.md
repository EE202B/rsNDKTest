# RenderScript with NDK
Enable calling RenderScript in NDK. Build with Gradle + CMake in Android Studio. **Currently only support running Intrinsic Scripts.**

## Notice
 * Update NDk to the latest r14-beta-2 version or higher.
 * Edit the `rs_root` according to your machine (TODO: remove this)
 * Copy the `rs_root/arm` folder into the same directory as `rs_root/armeabi-v7a` if you want to target to armeabi-v7a(same as other arch). This is because jniLibs.srcDirs cannot link to folder named `arm`. (TODO: Remove this)
 * Include header `<cpp/RenderScript.h>`. Then you can add your `ScriptIntrinsic` in your jni cpp.
 
## Issue
Currently, you still cannot launch your custom `.rs` kernels from NDK using this way. If you want to do this, you need to build your rs scripts with `ndk-build`. Then link to your Android Studio project as a shared library. There is an example for this case: [rs-hello-compute](https://android.googlesource.com/platform/ndk/+/master/tests/build/rs-hello-compute/jni/). 
