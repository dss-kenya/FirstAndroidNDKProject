#include <jni.h>
#include <android/log.h>

#define APP_NAME "FirstAndroidNDKProject"

extern "C" {
	JNIEXPORT jint JNICALL Java_com_adonnai_firstandroidndkproject_MainActivity_addTwoNumbers(JNIEnv* env,
			jobject jobj, jint x, jint y) {
		__android_log_print(ANDROID_LOG_INFO,APP_NAME, "value of x : %d \nvalue of y : %d ",x,y);
		return (x+y);
	}

	JNIEXPORT jint JNICALL Java_com_adonnai_firstandroidndkproject_MainActivity_divideByZero(JNIEnv* env,
				jobject jobj, jint x, jint y) {
			__android_log_print(ANDROID_LOG_INFO,APP_NAME, "value of x : %d \nvalue of y : %d ",x,y);
			return (x/y);
		}
}
