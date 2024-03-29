/*
 * Copyright (C) 2013 The Android Open Source Project
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

#define LOG_TAG "Terminal"

#include <jni.h>

namespace android {
    extern int register_com_android_terminal_Terminal();
}

using namespace android;

namespace JVM {
    extern JavaVM* jvm;
    extern JNIEnv* GetEnv();
}

extern "C" jint JNI_OnLoad(JavaVM* vm, void* reserved) {
    JVM::jvm = vm;
    register_com_android_terminal_Terminal();
    return JNI_VERSION_1_6;
}
