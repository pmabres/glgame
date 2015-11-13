package com.incluit.glgame.rendering;

import android.opengl.GLSurfaceView;

import com.incluit.glgame.nativeInterfaces.GameInterface;

import javax.microedition.khronos.egl.EGLConfig;
import javax.microedition.khronos.opengles.GL10;

public class GameRenderer implements GLSurfaceView.Renderer {
    private GameInterface mGameInterface;

    public GameRenderer(GameInterface gameInterface){
        mGameInterface = gameInterface;
    }
    public void onDrawFrame(GL10 gl) {
        mGameInterface.draw();
    }

    public void onSurfaceChanged(GL10 gl, int width, int height) {
        mGameInterface.start(width, height);
    }

    public void onSurfaceCreated(GL10 gl, EGLConfig config) {
        // Do nothing.
    }
}