#include "explode.h"
#include <algorithm>

void Explode::fire(Cave &c, string userCommand)
{
    if (userCommand == "explode") {
        int bombX = c.getTom()->getX(), bombY = c.getTom()->getY();
        Location* loc = c.getMap()[bombX][bombY];
        // Check if there are bomb in the current location
        if(ifBomb(loc)) {
            deleteGrid(loc);
        }

    }
}

bool Explode::ifBomb(Location* l)
{
    for(Thing* t : *l->getThings()) {
        if(dynamic_cast<Bomb*>(t)){
            return true;
        }
        else {
            return false;
        }
    }
}

void Explode::deleteGrid(Location* l)
{
    for(Thing* t : *l->getThings()) {
        if(!dynamic_cast<Bomb*>(t)) {
            delete t;
        }
    }

}
