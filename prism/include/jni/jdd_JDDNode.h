/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class jdd_JDDNode */

#ifndef _Included_jdd_JDDNode
#define _Included_jdd_JDDNode
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     jdd_JDDNode
 * Method:    DDN_IsConstant
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_jdd_JDDNode_DDN_1IsConstant
  (JNIEnv *, jclass, jlong);

/*
 * Class:     jdd_JDDNode
 * Method:    DDN_GetIndex
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_jdd_JDDNode_DDN_1GetIndex
  (JNIEnv *, jclass, jlong);

/*
 * Class:     jdd_JDDNode
 * Method:    DDN_GetValue
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_jdd_JDDNode_DDN_1GetValue
  (JNIEnv *, jclass, jlong);

/*
 * Class:     jdd_JDDNode
 * Method:    DDN_GetThen
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_jdd_JDDNode_DDN_1GetThen
  (JNIEnv *, jclass, jlong);

/*
 * Class:     jdd_JDDNode
 * Method:    DDN_GetElse
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_jdd_JDDNode_DDN_1GetElse
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif
