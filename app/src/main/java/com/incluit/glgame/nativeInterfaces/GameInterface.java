package com.incluit.glgame.nativeInterfaces;

public class GameInterface {
    long m_gameHandle;

    public void start(int width, int height) {
        m_gameHandle = init( width, height );
    }

    public void draw(){
        callDraw();
    }
    private native long init(int width, int height);
    private native void callDraw();
}
