//
// Created by pancho on 06/11/15.
//

#include "Transform.h"
using namespace game;

Transform::Transform( ) {

}
Transform::~Transform( ) {
    delete position_;
}

void Transform::setPosition(glm::vec3 position) {
    position_ = position;
}

glm::vec3 Transform::getPosition() {
    return position_;
}