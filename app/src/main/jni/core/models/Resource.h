//
// Created by pancho on 06/11/15.
//

#ifndef GLGAME_RESOURCE_H
#define GLGAME_RESOURCE_H
// basic file operations
#include <iostream>
#include <fstream>
enum RESOURCE_TYPE {
    Image
};
class Resource {
public:
    Resource(RESOURCE_TYPE);
    virtual ~Resource( );

private:
    RESOURCE_TYPE ResourceType;

};


#endif //GLGAME_RESOURCE_H
