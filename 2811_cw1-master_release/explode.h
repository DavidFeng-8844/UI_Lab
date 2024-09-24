#ifndef EXPLODE_H
#define EXPLODE_H
#include "command.h"
#include "bomb.h"
#include "thing.h"

class Explode : public Command
{
public:
    Explode() : Command("explode"){};
    void fire(Cave& c, string userCommand);
    bool ifBomb(Location* l);
    void ignite(Location* l, Cave& c, int bombX, int bombY);
    void deleteGrid(Location* l);
};

#endif // EXPLODE_H
