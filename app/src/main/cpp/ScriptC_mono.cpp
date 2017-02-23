/*
 * Copyright (C) 2011-2014 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * This file is auto-generated. DO NOT MODIFY!
 * The source Renderscript file: /Users/YingnanWang/Documents/EE202B/android/CMakeRSTest/app/src/main/rs/mono.rs
 */

#include "ScriptC_mono.h"

static const unsigned char __txt[] = {
    0xde,0xc0,0x17,0x0b,0x00,0x00,0x00,0x00,0x2c,0x00,0x00,0x00,0x30,0x05,0x00,0x00,
    0x00,0x00,0x00,0x00,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x40,0x04,0x00,
    0x60,0x09,0x00,0x00,0x02,0x40,0x04,0x00,0x03,0x00,0x00,0x00,0x42,0x43,0xc0,0xde,
    0x21,0x0c,0x00,0x00,0x49,0x01,0x00,0x00,0x01,0x10,0x00,0x00,0x12,0x00,0x00,0x00,
    0x07,0x81,0x23,0x91,0x41,0xc8,0x04,0x49,0x06,0x10,0x32,0x39,0x92,0x01,0x84,0x0c,
    0x25,0x05,0x08,0x19,0x1e,0x04,0x8b,0x62,0x80,0x14,0x45,0x02,0x42,0x92,0x0b,0x42,
    0xa4,0x10,0x32,0x14,0x38,0x08,0x18,0x49,0x0a,0x32,0x44,0x24,0x48,0x0a,0x90,0x21,
    0x23,0xc4,0x52,0x80,0x0c,0x19,0x21,0x72,0x24,0x07,0xc8,0x48,0x11,0x62,0xa8,0xa0,
    0xa8,0x40,0xc6,0xf0,0x01,0x00,0x00,0x00,0x49,0x18,0x00,0x00,0x0a,0x00,0x00,0x00,
    0x0b,0x8c,0x00,0x04,0x41,0x10,0x04,0x09,0x01,0x04,0x41,0x10,0x04,0x89,0xff,0xff,
    0xff,0xff,0x1f,0xc0,0x60,0x81,0xf0,0xff,0xff,0xff,0xff,0x03,0x18,0x2d,0x10,0xfe,
    0xff,0xff,0xff,0x7f,0x00,0x23,0x00,0x00,0x89,0x20,0x00,0x00,0x14,0x00,0x00,0x00,
    0x32,0x22,0x48,0x09,0x20,0x64,0x85,0x04,0x93,0x22,0xa4,0x84,0x04,0x93,0x22,0xe3,
    0x84,0xa1,0x90,0x14,0x12,0x4c,0x8a,0x8c,0x0b,0x84,0xa4,0x4c,0x10,0x4c,0x23,0x00,
    0x73,0x04,0xc8,0x30,0x02,0x11,0x90,0x28,0x03,0x18,0x83,0xc8,0x0c,0xc0,0x30,0x02,
    0x61,0x14,0xe1,0x08,0x42,0xc3,0x08,0x83,0x51,0x06,0xa3,0x14,0xad,0x22,0x08,0x45,
    0x6d,0x20,0x60,0x8e,0x00,0x0c,0xe6,0x08,0x40,0x61,0x18,0x61,0x80,0x00,0x00,0x00,
    0x13,0xb0,0x70,0x90,0x87,0x76,0xb0,0x87,0x3b,0x68,0x03,0x77,0x78,0x07,0x77,0x28,
    0x87,0x36,0x60,0x87,0x74,0x70,0x87,0x7a,0xc0,0x87,0x36,0x38,0x07,0x77,0xa8,0x87,
    0x72,0x08,0x07,0x71,0x48,0x87,0x0d,0x64,0x50,0x0e,0x6d,0x00,0x0f,0x7a,0x30,0x07,
    0x72,0xa0,0x07,0x73,0x20,0x07,0x6d,0x90,0x0e,0x76,0x40,0x07,0x7a,0x60,0x07,0x74,
    0xd0,0x06,0xf6,0x10,0x07,0x72,0x80,0x07,0x7a,0x60,0x07,0x74,0xa0,0x07,0x71,0x20,
    0x07,0x78,0xd0,0x06,0xee,0x30,0x07,0x72,0xd0,0x06,0xb3,0x60,0x07,0x74,0x30,0x44,
    0x29,0x00,0x00,0x08,0x00,0x00,0x00,0x80,0x21,0x4a,0x02,0x04,0x80,0x00,0x00,0x00,
    0x00,0x0c,0x51,0x18,0x20,0x00,0x04,0x00,0x00,0x00,0x60,0x88,0xe2,0x00,0x01,0x20,
    0x00,0x00,0x00,0x00,0x59,0x20,0x00,0x00,0x06,0x00,0x00,0x00,0x32,0x1e,0x98,0x0c,
    0x19,0x11,0x4c,0x90,0x8c,0x09,0x26,0x47,0xc6,0x04,0x43,0x82,0x25,0x50,0x08,0x14,
    0x47,0x00,0x00,0x00,0x79,0x18,0x00,0x00,0x57,0x00,0x00,0x00,0x1a,0x03,0x4c,0x90,
    0x46,0x02,0x13,0x34,0x44,0x80,0x08,0x2a,0x77,0x63,0x68,0x61,0x72,0x5f,0x73,0x69,
    0x7a,0x65,0x43,0x04,0xa8,0x18,0x62,0x40,0xc4,0x13,0x40,0x05,0x9b,0xb6,0x34,0xb7,
    0xaf,0x32,0xb7,0xba,0xb6,0xaf,0xb9,0x34,0xbd,0xb2,0x21,0x06,0x44,0x3c,0x04,0x54,
    0x90,0x0f,0x82,0xdc,0xc8,0xe4,0xde,0xd2,0xc8,0x40,0xc6,0xd8,0xc2,0xdc,0xce,0x40,
    0xec,0xca,0xe4,0xe6,0xd2,0xde,0xdc,0x40,0x66,0x5c,0x70,0x5c,0x64,0x6a,0x6c,0x64,
    0x64,0x72,0x40,0x40,0x50,0xc4,0xc2,0xe6,0xca,0xc8,0x40,0xde,0xdc,0x40,0x98,0x98,
    0xac,0x9a,0x40,0x66,0x5c,0x70,0x5c,0x64,0x6a,0x6c,0x64,0x64,0x72,0x52,0x86,0x08,
    0x8f,0xc1,0xc3,0xae,0x4c,0x6e,0x2e,0xed,0xcd,0x8d,0x41,0xcc,0x10,0xe2,0x41,0x9e,
    0x84,0x91,0x5a,0x98,0x5d,0xd8,0x17,0x5c,0xd8,0xd8,0x5a,0xd8,0x59,0xd9,0x97,0x5b,
    0x58,0x5b,0x19,0xb7,0xb1,0xb7,0x36,0x97,0xbc,0x34,0xb7,0x33,0xb7,0x30,0xb7,0xbb,
    0x30,0xb7,0x33,0x97,0xb1,0xb6,0xb0,0xb5,0x32,0xb9,0x39,0xba,0xb2,0x39,0xba,0x21,
    0xc4,0xb3,0x3c,0x0c,0x09,0xb9,0xb7,0x37,0xba,0x21,0xc2,0xe3,0x30,0x98,0x19,0x22,
    0x3c,0x10,0x9f,0xb7,0x36,0xb7,0x34,0xb8,0x37,0xba,0x32,0x37,0x3a,0x90,0x31,0xb4,
    0x30,0x39,0x46,0x53,0x69,0x6d,0x70,0x6c,0x65,0x20,0x43,0x2f,0x43,0x2b,0x2b,0x20,
    0x54,0x42,0x41,0x41,0x43,0x84,0x67,0x1a,0x22,0x44,0xc6,0x10,0xe3,0x91,0x1e,0x2a,
    0x32,0x86,0x18,0x8f,0xf5,0x58,0x91,0xd1,0x88,0x8d,0xcd,0xae,0xcd,0xa5,0xed,0x8d,
    0xac,0x8e,0xad,0xcc,0xc5,0x8c,0x2d,0xec,0x6c,0x6e,0x8a,0x30,0x14,0x55,0xd8,0xd8,
    0xec,0xda,0x5c,0xd2,0xc8,0xca,0xdc,0xe8,0xa6,0x04,0x47,0x8f,0x11,0x38,0xb9,0xb0,
    0xb3,0xb6,0xb0,0x29,0x82,0xd2,0xf4,0x1a,0x91,0x9b,0xfb,0x2a,0xc3,0x83,0x7b,0x93,
    0xa3,0xfb,0x32,0x7b,0x93,0x2b,0x0b,0x1b,0x43,0xfb,0x72,0x0b,0x6b,0x2b,0x9b,0x12,
    0x3c,0x95,0x46,0xe4,0xe6,0xbe,0xca,0xf0,0xe0,0xde,0xe4,0xe8,0xbe,0xcc,0xde,0xe4,
    0xca,0xc2,0xc6,0xd0,0xa6,0x04,0x11,0x00,0x79,0x18,0x00,0x00,0x56,0x00,0x00,0x00,
    0x33,0x08,0x80,0x1c,0xc4,0xe1,0x1c,0x66,0x14,0x01,0x3d,0x88,0x43,0x38,0x84,0xc3,
    0x8c,0x42,0x80,0x07,0x79,0x78,0x07,0x73,0x98,0x71,0x0c,0xe6,0x00,0x0f,0xed,0x10,
    0x0e,0xf4,0x80,0x0e,0x33,0x0c,0x42,0x1e,0xc2,0xc1,0x1d,0xce,0xa1,0x1c,0x66,0x30,
    0x05,0x3d,0x88,0x43,0x38,0x84,0x83,0x1b,0xcc,0x03,0x3d,0xc8,0x43,0x3d,0x8c,0x03,
    0x3d,0xcc,0x78,0x8c,0x74,0x70,0x07,0x7b,0x08,0x07,0x79,0x48,0x87,0x70,0x70,0x07,
    0x7a,0x70,0x03,0x76,0x78,0x87,0x70,0x20,0x87,0x19,0xcc,0x11,0x0e,0xec,0x90,0x0e,
    0xe1,0x30,0x0f,0x6e,0x30,0x0f,0xe3,0xf0,0x0e,0xf0,0x50,0x0e,0x33,0x10,0xc4,0x1d,
    0xde,0x21,0x1c,0xd8,0x21,0x1d,0xc2,0x61,0x1e,0x66,0x30,0x89,0x3b,0xbc,0x83,0x3b,
    0xd0,0x43,0x39,0xb4,0x03,0x3c,0xbc,0x83,0x3c,0x84,0x03,0x3b,0xcc,0xf0,0x14,0x76,
    0x60,0x07,0x7b,0x68,0x07,0x37,0x68,0x87,0x72,0x68,0x07,0x37,0x80,0x87,0x70,0x90,
    0x87,0x70,0x60,0x07,0x76,0x28,0x07,0x76,0xf8,0x05,0x76,0x78,0x87,0x77,0x80,0x87,
    0x5f,0x08,0x87,0x71,0x18,0x87,0x72,0x98,0x87,0x79,0x98,0x81,0x2c,0xee,0xf0,0x0e,
    0xee,0xe0,0x0e,0xf5,0xc0,0x0e,0xec,0x30,0x03,0x62,0xc8,0xa1,0x1c,0xe4,0xa1,0x1c,
    0xcc,0xa1,0x1c,0xe4,0xa1,0x1c,0xdc,0x61,0x1c,0xca,0x21,0x1c,0xc4,0x81,0x1d,0xca,
    0x61,0x06,0xd6,0x90,0x43,0x39,0xc8,0x43,0x39,0x98,0x43,0x39,0xc8,0x43,0x39,0xb8,
    0xc3,0x38,0x94,0x43,0x38,0x88,0x03,0x3b,0x94,0xc3,0x2f,0xbc,0x83,0x3c,0xfc,0x82,
    0x3b,0xd4,0x03,0x3b,0xb0,0xc3,0x0c,0xc7,0x69,0x87,0x70,0x58,0x87,0x72,0x70,0x83,
    0x74,0x68,0x07,0x78,0x60,0x87,0x74,0x18,0x87,0x74,0xa0,0x87,0x19,0xce,0x53,0x0f,
    0xee,0x00,0x0f,0xf2,0x50,0x0e,0xe4,0x90,0x0e,0xe3,0x40,0x0f,0xe1,0x20,0x0e,0xec,
    0x50,0x0e,0x33,0x20,0x28,0x1d,0xdc,0xc1,0x1e,0xc2,0x41,0x1e,0xd2,0x21,0x1c,0xdc,
    0x81,0x1e,0xdc,0xe0,0x1c,0xe4,0xe1,0x1d,0xea,0x01,0x1e,0x66,0x18,0x51,0x38,0xb0,
    0x43,0x3a,0x9c,0x83,0x3b,0x00,0x00,0x00,0x71,0x20,0x00,0x00,0x0e,0x00,0x00,0x00,
    0x06,0x40,0x44,0x8e,0x33,0x59,0x40,0x14,0x49,0x6e,0xf3,0x00,0x82,0xc2,0x39,0x8b,
    0x13,0xf1,0x3c,0xcf,0x9b,0x40,0xf3,0xcf,0xf7,0xe0,0x4c,0x5d,0x75,0xff,0x05,0xfb,
    0xdb,0x80,0xf6,0xcf,0xf5,0x1e,0x49,0x29,0x20,0x28,0x9c,0xb3,0x38,0x51,0xeb,0xf0,
    0x3c,0xcf,0x77,0xd5,0xfd,0x17,0x00,0x00,0x61,0x20,0x00,0x00,0x26,0x00,0x00,0x00,
    0x13,0x04,0x41,0x2c,0x10,0x00,0x00,0x00,0x0e,0x00,0x00,0x00,0x24,0x47,0x00,0xc6,
    0x1a,0x80,0x40,0x20,0x58,0x04,0x23,0x00,0xa4,0x66,0x00,0xc6,0x1a,0x4e,0xba,0x94,
    0xd3,0x4f,0x6c,0x63,0x36,0xfe,0x6a,0xd3,0x97,0x7d,0x8f,0xce,0x0c,0x00,0x99,0x31,
    0x82,0xda,0xf4,0x65,0xdf,0x1b,0x23,0x10,0xdb,0x98,0x8d,0xbf,0x31,0x82,0x93,0x2e,
    0xe5,0xf4,0x03,0x00,0x74,0x8c,0x11,0x03,0x62,0x08,0x82,0x69,0x90,0x81,0x7a,0x94,
    0x11,0x83,0x62,0x08,0x84,0xca,0x99,0x63,0x68,0x2c,0x66,0x90,0xe1,0x6a,0x92,0x11,
    0x03,0x62,0x08,0x06,0x6c,0x30,0x02,0xc9,0x06,0x00,0xc3,0x81,0x00,0x00,0x00,0x00,
    0x03,0x00,0x00,0x00,0x76,0x40,0x54,0x3f,0xd2,0x18,0x42,0x51,0xfd,0x0e,0x35,0x01,
    0x01,0x31,0x00,0x00,0x03,0x00,0x00,0x00,0x5b,0x06,0x20,0xb8,0xb6,0x0c,0x47,0x70,
    0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};




ScriptC_mono::ScriptC_mono(android::RSC::sp<android::RSC::RS> rs):
        ScriptC(rs, __txt, sizeof(__txt), "mono", 4, "/data/data/com.yingnanwang.cmakerstest/app", sizeof("com.yingnanwang.cmakerstest")) {
    __rs_elem_U8_4 = android::RSC::Element::U8_4(mRS);
}

ScriptC_mono::~ScriptC_mono() {
}

void ScriptC_mono::forEach_root(android::RSC::sp<android::RSC::Allocation> ain,
                                android::RSC::sp<android::RSC::Allocation> aout) {
    // Type check for ain
    if (!ain->getType()->getElement()->isCompatible(__rs_elem_U8_4)) {
        mRS->throwError(RS_ERROR_RUNTIME_ERROR, "Incompatible type");
        return;
    }

    // Type check for aout
    if (!aout->getType()->getElement()->isCompatible(__rs_elem_U8_4)) {
        mRS->throwError(RS_ERROR_RUNTIME_ERROR, "Incompatible type");
        return;
    }

    forEach(0, ain, aout, NULL, 0);
}

