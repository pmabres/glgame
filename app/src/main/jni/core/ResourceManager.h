//
// Created by pancho on 06/11/15.
//

#ifndef GLGAME_RESOURCEMANAGER_H
#define GLGAME_RESOURCEMANAGER_H
#include "Common.h"

class ResourceManager {
public:
    ResourceManager( );
    virtual ~ResourceManager( );
    int LoadResource(std::string resourcePath);
private:

};


#endif //GLGAME_RESOURCEMANAGER_H
