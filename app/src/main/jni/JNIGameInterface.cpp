#include <jni.h>
#include "JNIGameInterface.h"

JNIEXPORT jlong JNICALL Java_com_incluit_glgame_nativeInterfaces_GameInterface_init(JNIEnv * env, jobject obj,  jint width, jint height) {
    m_game = new GameCore();
    m_game->init(width,height);
    return ( jlong )m_game;
}

JNIEXPORT void JNICALL Java_com_incluit_glgame_nativeInterfaces_GameInterface_callDraw(JNIEnv * env, jobject obj) {
    m_game->draw();
}