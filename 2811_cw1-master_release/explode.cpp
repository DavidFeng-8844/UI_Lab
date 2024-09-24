#include "explode.h"
#include <algorithm>
#include <vector>

using namespace std;

void Explode::fire(Cave &c, string userCommand)
{
    if (userCommand == "explode") {
        int bombX = c.getTom()->getX(), bombY = c.getTom()->getY();
        Location* loc = c.getMap()[bombX][bombY];
        // Check if there are bomb in the current location
        if(ifBomb(loc)) {
            ignite(loc, c, bombX, bombY);
        }

    }
}

bool Explode::ifBomb(Location* l)
{
    for(Thing* t : *l->getThings()) {
        if(dynamic_cast<Bomb*>(t)){
            return true;
        }
    }
    return false;
}

void Explode::ignite(Location* l, Cave& c, int bombX, int bombY)
{
    //vec of in to record nearby bomb's direction
    bool* bombDir = new bool[4];
    // vector<Thing*>* curThing = l->getThings();
    // curThing->erase(remove_if(curThing->begin(), curThing->end(),
    //         [](Thing* t) {return dynamic_cast<Tom*>(t) == NULL;}), curThing->end());
    // Delete objects in four direction

    // Call deleteGrid function to delete one grid
    deleteGrid(l);

    // Search four location
    if (bombY+1 < c.getHeight()) {
        Location* eloc = c.getMap()[bombX][bombY+1];
        bombDir[0] = ifBomb(eloc);
        if(bombDir[0]) {
            deleteGrid(eloc);
            ignite(eloc, c, bombX, bombY+1);
        }
    }

    if (bombX-1 > 0) {
        Location* sloc = c.getMap()[bombX-1][bombY];
        bombDir[1] = ifBomb(sloc);
        if(bombDir[1]) {
            deleteGrid(sloc);
            ignite(sloc, c, bombX-1, bombY);
        }
    }

    if (bombY-1 > 0) {
        Location* wloc = c.getMap()[bombX][bombY-1];
        bombDir[2] = ifBomb(wloc);
        if(bombDir[2]) {
            deleteGrid(wloc);
            ignite(wloc, c, bombX, bombY-1);
        }
    }

    if (bombX+1 < c.getWidth()) {
        Location* nloc = c.getMap()[bombX+1][bombY];
        bombDir[3] = ifBomb(nloc);
        if(bombDir[3]) {
            deleteGrid(nloc);
            ignite(nloc, c, bombX+1, bombY);
        }
    }
    delete[] bombDir;
}

void Explode::deleteGrid(Location* l)
{
    vector<Thing*>* curThing = l->getThings();
    curThing->erase(remove_if(curThing->begin(), curThing->end(),
        [](Thing* t) {return dynamic_cast<Tom*>(t) == NULL;}), curThing->end());
}
