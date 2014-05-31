/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class posix_Malloc */

#ifndef _Included_posix_Malloc
#define _Included_posix_Malloc
#ifdef __cplusplus
extern "C" {
#endif
#undef posix_Malloc_CBYTE_TYPE
#define posix_Malloc_CBYTE_TYPE 0L
#undef posix_Malloc_CSHORT_TYPE
#define posix_Malloc_CSHORT_TYPE 1L
#undef posix_Malloc_CINT_TYPE
#define posix_Malloc_CINT_TYPE 2L
#undef posix_Malloc_CLONG_TYPE
#define posix_Malloc_CLONG_TYPE 3L
#undef posix_Malloc_CFLT_TYPE
#define posix_Malloc_CFLT_TYPE 4L
#undef posix_Malloc_CDBL_TYPE
#define posix_Malloc_CDBL_TYPE 5L
#undef posix_Malloc_CPTR_TYPE
#define posix_Malloc_CPTR_TYPE 6L
/*
 * Class:     posix_Malloc
 * Method:    malloc
 * Signature: (I)J
 */
JNIEXPORT jlong JNICALL Java_posix_Malloc_malloc
  (JNIEnv *, jclass, jint);

/*
 * Class:     posix_Malloc
 * Method:    free
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_posix_Malloc_free
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif
