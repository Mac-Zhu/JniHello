//引入上面生成的头文件，并实现头文件中声明的方法
#include "com_qian_NativeCaller.h"
JNIEXPORT jstring JNICALL Java_com_qian_NativeCaller_getStringFromNative(JNIEnv *env, jobject obj){//方法名是Java_包名_类名_方法名
    char *str = "String from native C";
    return (*env)->NewStringUTF(env, str);
}