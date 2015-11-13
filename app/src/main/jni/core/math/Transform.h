//
// Created by pancho on 06/11/15.
//

#ifndef GLGAME_TRANSFORM_H
#define GLGAME_TRANSFORM_H
#include "Graphics.h"

namespace game {

class Transform {
    public:
        Transform( );
        virtual ~Transform( );
        void setPosition(glm::vec3 position);
        glm::vec3 Transform::getPosition();
    private:
        glm::vec3 position_;
        glm::vec3 rotation_;
        glm::vec3 scale_;
};

} //namespace game
#endif //GLGAME_TRANSFORM_H
