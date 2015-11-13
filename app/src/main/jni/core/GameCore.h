#ifndef GLGAME_GAMECORE_H
#define GLGAME_GAMECORE_H

#include <GLES2/gl2.h>

static const char gVertexShader[] =
        "attribute vec4 vPosition;\n"
                "void main() {\n"
                "  gl_Position = vPosition;\n"
                "}\n";

static const char gFragmentShader[] =
        "precision mediump float;\n"
                "void main() {\n"
                "  gl_FragColor = vec4(1.0, 0.0, 0.0, 1.0);\n"
                "}\n";
const GLfloat gTriangleVertices[] = { -1.0f, 1.0f, -1.0f, -1.0f,
                                      1.0f, -1.0f };

static void printGLString(const char *name, GLenum s);
static void checkGlError(const char* op);

namespace game {
    class GameCore
    {
    public:
        GameCore( );
        virtual ~GameCore( );
        bool init(int w, int h);
        void draw();
    private:
        GLuint loadShader(GLenum shaderType, const char* pSource);
        GLuint createProgram(const char* pVertexSource, const char* pFragmentSource);
        GLuint gProgram;
        GLuint gvPositionHandle;
        float fnumber = -1.0f;

    };



}
#endif //GLGAME_GAMECORE_H