package com.incluit.glgame;
import android.app.Application;

import com.incluit.glgame.nativeInterfaces.GameInterface;

public class GameApplication extends Application {
    static {
        System.loadLibrary("glgame");
    }
    static private GameInterface m_game;

    static public GameInterface getGame(){
        return m_game;
    }
    public GameApplication() {
        m_game = new GameInterface();
    }
    @Override
    public void onCreate() {
        super.onCreate();
    }
}
