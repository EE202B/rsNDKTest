#ifndef __RSMONOWRAPPER_H__
#define __RSMONOWRAPPER_H__

#include "RenderScript.h"

using namespace android::RSC;

void launch_mono(sp<Allocation> inputAlloc, sp<Allocation> outputAlloc, sp<RS> rs);

#endif