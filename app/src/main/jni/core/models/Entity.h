//
// Created by pancho on 06/11/15.
//

#ifndef GLGAME_ENTITY_H
#define GLGAME_ENTITY_H

#include "Resource.h"
#include "Quad.h"

class Entity {
public:
    Entity( );
    virtual ~Entity( );
private:
    Quad quad;
    Resource resource;
};


#endif //GLGAME_ENTITY_H
