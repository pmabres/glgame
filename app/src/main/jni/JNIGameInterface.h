#ifndef _Included_com_incluit_glgame_nativeInterfaces_GameInterface
#define _Included_com_incluit_glgame_nativeInterfaces_GameInterface
#include <stddef.h>
#include "core/GameCore.h"

GameCore* m_game;

#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     glGame_nativeInterfaces_GameInterface
 * Method:    init
 * Signature: (II)J
 */
JNIEXPORT jlong JNICALL Java_com_incluit_glgame_nativeInterfaces_GameInterface_init(JNIEnv * env, jobject obj,  jint width, jint height);
/*
 * Class:     glGame_nativeInterfaces_GameInterface
 * Method:    callDraw
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_incluit_glgame_nativeInterfaces_GameInterface_callDraw(JNIEnv * env, jobject obj);

#ifdef __cplusplus
}
#endif
#endif //_Included_com_incluit_glgame_nativeInterfaces_GameInterface