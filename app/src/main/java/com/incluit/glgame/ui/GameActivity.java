package com.incluit.glgame.ui;

import android.app.Activity;
import android.os.Bundle;
import com.incluit.glgame.GameApplication;
import com.incluit.glgame.rendering.GameView;

public class GameActivity extends Activity {
    GameView mView;
    @Override protected void onCreate(Bundle icicle) {
        super.onCreate(icicle);

        mView = new GameView(getApplication(), GameApplication.getGame());
        setContentView(mView);
    }

    @Override protected void onPause() {
        super.onPause();
        mView.onPause();
    }

    @Override protected void onResume() {
        super.onResume();
        mView.onResume();
    }
}
