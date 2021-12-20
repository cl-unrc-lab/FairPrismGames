/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class prism_NativeIntArray */

#ifndef _Included_prism_NativeIntArray
#define _Included_prism_NativeIntArray
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     prism_NativeIntArray
 * Method:    NIA_CreateArray
 * Signature: (I)J
 */
JNIEXPORT jlong JNICALL Java_prism_NativeIntArray_NIA_1CreateArray
  (JNIEnv *, jclass, jint);

/*
 * Class:     prism_NativeIntArray
 * Method:    NIA_DeleteArray
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_prism_NativeIntArray_NIA_1DeleteArray
  (JNIEnv *, jclass, jlong);

/*
 * Class:     prism_NativeIntArray
 * Method:    NIA_Get
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_prism_NativeIntArray_NIA_1Get
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     prism_NativeIntArray
 * Method:    NIA_Set
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_prism_NativeIntArray_NIA_1Set
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     prism_NativeIntArray
 * Method:    NIA_SetAll
 * Signature: (JIII)V
 */
JNIEXPORT void JNICALL Java_prism_NativeIntArray_NIA_1SetAll
  (JNIEnv *, jclass, jlong, jint, jint, jint);

#ifdef __cplusplus
}
#endif
#endif
