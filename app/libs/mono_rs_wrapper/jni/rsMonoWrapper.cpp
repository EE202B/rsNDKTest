#include "rsMonoWrapper.h"
#include <jni.h>
#include <android/log.h>

#include "ScriptC_mono.h"

#define  LOG_TAG_MY    "rsMonoWrapper"
#define  LOGI(...)  __android_log_print(ANDROID_LOG_INFO,LOG_TAG_MY,__VA_ARGS__)

void launch_mono(sp<Allocation> inputAlloc, sp<Allocation> outputAlloc, sp<RS> rs)
{
	LOGI("Step1");
	ScriptC_mono* sc = new ScriptC_mono(rs);
	LOGI("Step2");
	sc->forEach_root(inputAlloc, outputAlloc);
	LOGI("Step3");
	delete sc;
	LOGI("Step4");
}