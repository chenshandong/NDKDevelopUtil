#include <jni.h>
#include <android/log.h>

JNIEXPORT jstring JNICALL Java_com_chensd_ndkdeveloputil_JniTest_test
  (JNIEnv *env, jobject jobj){
    return (*env)->NewStringUTF(env, "jnitest_ok");
  }
