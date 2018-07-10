#include <jni.h>
#include <string>

extern "C"{
#include "libavcodec/avcodec.h"
}

extern "C"
jstring
Java_com_dxtest_demoffmpeg01_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
/*    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());*/

    char info[10000] = { 0 };
    sprintf(info, "%s\n", avcodec_configuration());
    return env->NewStringUTF(info);
}
