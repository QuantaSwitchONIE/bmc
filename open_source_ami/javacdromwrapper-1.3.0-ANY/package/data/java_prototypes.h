/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_ami_iusb_CDROMRedir */

#ifndef _Included_com_ami_iusb_CDROMRedir
#define _Included_com_ami_iusb_CDROMRedir
#ifdef __cplusplus
extern "C" {
#endif
#undef com_ami_iusb_CDROMRedir_MIN_PRIORITY
#define com_ami_iusb_CDROMRedir_MIN_PRIORITY 1L
#undef com_ami_iusb_CDROMRedir_NORM_PRIORITY
#define com_ami_iusb_CDROMRedir_NORM_PRIORITY 5L
#undef com_ami_iusb_CDROMRedir_MAX_PRIORITY
#define com_ami_iusb_CDROMRedir_MAX_PRIORITY 10L
#undef com_ami_iusb_CDROMRedir_PORT
#define com_ami_iusb_CDROMRedir_PORT 5120L
#undef com_ami_iusb_CDROMRedir_START_LOCAL_IMAGE_REDIRECTION
#define com_ami_iusb_CDROMRedir_START_LOCAL_IMAGE_REDIRECTION 240L
#undef com_ami_iusb_CDROMRedir_DEVICE_REDIRECTION_ACK
#define com_ami_iusb_CDROMRedir_DEVICE_REDIRECTION_ACK 241L
#undef com_ami_iusb_CDROMRedir_CONNECTION_ACCEPTED
#define com_ami_iusb_CDROMRedir_CONNECTION_ACCEPTED 1L
#undef com_ami_iusb_CDROMRedir_CONNECTION_DENIED
#define com_ami_iusb_CDROMRedir_CONNECTION_DENIED 2L
#undef com_ami_iusb_CDROMRedir_MAX_READ_SECTORS
#define com_ami_iusb_CDROMRedir_MAX_READ_SECTORS 64L
#undef com_ami_iusb_CDROMRedir_MAX_READ_SIZE
#define com_ami_iusb_CDROMRedir_MAX_READ_SIZE 131072L
/*
 * Class:     com_ami_iusb_CDROMRedir
 * Method:    listCDROMDrives
 * Signature: ()[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_com_ami_iusb_CDROMRedir_listCDROMDrives
  (JNIEnv *, jobject);

/*
 * Class:     com_ami_iusb_CDROMRedir
 * Method:    newCDROMReader
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_ami_iusb_CDROMRedir_newCDROMReader
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_ami_iusb_CDROMRedir
 * Method:    deleteCDROMReader
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_ami_iusb_CDROMRedir_deleteCDROMReader
  (JNIEnv *, jobject);

/*
 * Class:     com_ami_iusb_CDROMRedir
 * Method:    openCDROM
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_ami_iusb_CDROMRedir_openCDROM
  (JNIEnv *, jobject, jbyteArray);

/*
 * Class:     com_ami_iusb_CDROMRedir
 * Method:    closeCDROM
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_ami_iusb_CDROMRedir_closeCDROM
  (JNIEnv *, jobject);

/*
 * Class:     com_ami_iusb_CDROMRedir
 * Method:    executeCDROMSCSICmd
 * Signature: (Ljava/nio/ByteBuffer;Ljava/nio/ByteBuffer;)I
 */
JNIEXPORT jint JNICALL Java_com_ami_iusb_CDROMRedir_executeCDROMSCSICmd
  (JNIEnv *, jobject, jobject, jobject);

/*
 * Class:     com_ami_iusb_CDROMRedir
 * Method:    getVersion
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_ami_iusb_CDROMRedir_getVersion
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
