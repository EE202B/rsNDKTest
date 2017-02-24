#include <jni.h>
#include <string>
#include <android/log.h>
#include <android/bitmap.h>

#include <cpp/RenderScript.h>


#define  LOG_TAG    "native-lib-rs"
#define  LOGI(...)  __android_log_print(ANDROID_LOG_INFO,LOG_TAG,__VA_ARGS__)
#define  LOGE(...)  __android_log_print(ANDROID_LOG_ERROR,LOG_TAG,__VA_ARGS__)

using namespace android::RSC;


extern "C" JNIEXPORT void JNICALL
Java_com_yingnanwang_cmakerstest_MainActivity_nativeMono(JNIEnv * env,
                                                           jclass,
                                                           jstring pathObj,
                                                           jint X,
                                                           jint Y,
                                                           jobject jbitmapIn,
                                                           jobject jbitmapOut
)
{
    void* inputPtr = nullptr;
    void* outputPtr = nullptr;

    AndroidBitmap_lockPixels(env, jbitmapIn, &inputPtr);
    AndroidBitmap_lockPixels(env, jbitmapOut, &outputPtr);


    const char * path = env->GetStringUTFChars(pathObj, nullptr);
    sp<RS> rs = new RS();
    rs->init(path);
    env->ReleaseStringUTFChars(pathObj, path);

    sp<const Element> e = Element::RGBA_8888(rs);

    sp<const Type> t = Type::create(rs, e, X, Y, 0);

    sp<Allocation> inputAlloc = Allocation::createTyped(rs, t, RS_ALLOCATION_MIPMAP_NONE,
                                                        RS_ALLOCATION_USAGE_SHARED | RS_ALLOCATION_USAGE_SCRIPT,
                                                        inputPtr);
    sp<Allocation> outputAlloc = Allocation::createTyped(rs, t, RS_ALLOCATION_MIPMAP_NONE,
                                                         RS_ALLOCATION_USAGE_SHARED | RS_ALLOCATION_USAGE_SCRIPT,
                                                         outputPtr);

    LOGI("Allocation succeed");

    inputAlloc->copy2DRangeFrom(0, 0, X, Y, inputPtr);

    auto blurScript = ScriptIntrinsicBlur::create(rs, e);
    blurScript->setRadius(15);
    blurScript->setInput(inputAlloc);
    blurScript->forEach(outputAlloc);

    outputAlloc->copy2DRangeTo(0, 0, X, Y, outputPtr);

    AndroidBitmap_unlockPixels(env, jbitmapIn);
    AndroidBitmap_unlockPixels(env, jbitmapOut);
}













