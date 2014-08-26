/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_openalpr_AlprJNIWrapper */

#ifndef _Included_org_openalpr_AlprJNIWrapper
#define _Included_org_openalpr_AlprJNIWrapper
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_openalpr_AlprJNIWrapper
 * Method:    recognize
 * Signature: (Ljava/lang/String;I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_openalpr_AlprJNIWrapper_recognize
  (JNIEnv *, jobject, jstring, jint);

/*
 * Class:     org_openalpr_AlprJNIWrapper
 * Method:    recognizeWithCountryNRegion
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_openalpr_AlprJNIWrapper_recognizeWithCountryNRegion
  (JNIEnv *, jobject, jstring, jstring, jstring, jint);

/*
 * Class:     org_openalpr_AlprJNIWrapper
 * Method:    recognizeWithCountryRegionNConfig
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_openalpr_AlprJNIWrapper_recognizeWithCountryRegionNConfig
  (JNIEnv *, jobject, jstring, jstring, jstring, jstring, jint);

/*
 * Class:     org_openalpr_AlprJNIWrapper
 * Method:    version
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_openalpr_AlprJNIWrapper_version
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
