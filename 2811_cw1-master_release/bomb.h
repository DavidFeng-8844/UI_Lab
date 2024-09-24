#ifndef BOMB_H
#define BOMB_H
#include "thing.h"

class Bomb : public Thing
{
    string getName()
    {
        return "bomb";
    }
};

#endif // BOMB_H
