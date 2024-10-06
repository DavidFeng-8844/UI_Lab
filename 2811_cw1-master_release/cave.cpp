#include <stdexcept>
#include <string>
#include <iostream>
#include <vector>
#include <string>

#include "cave.h"
#include "rock.h"
#include "thing.h"
#include "location.h"
#include "move.h"
#include "place.h"
#include "throw.h"
#include "explode.h"

using namespace std;

Cave::Cave(int w, int h) : width(w), height(h) // width and height of the cave
{
    // if (width != 8 || height != 8) // be sure to update Cave::show() if you remove this.
    //     throw new logic_error("fixme: Cave needs to be fixed for non-standard sizes.");

    if ( width < 5 || height < 5)
        throw new logic_error("cave too small for tom.");

    // map = new Location**[8];
    map = new Location** [height];

    // for (int x = 0; x < height; x++)
    // {
    //     // Location** column = new Location*[8];
    //     map[x] = new Location*[width];
    //     for (int y = 0; y < width; y++)
    //         map[x][y] = new Location();
    // }

    try {
        for (int x = 0; x < height; x++) {
            map[x] = new Location*[width];
            for (int y = 0; y < width; y++) {
                map[x][y] = new Location(); // Ensure this does not throw
            }
        }
    } catch (...) {
        // Clean up already allocated memory to prevent leaks
        for (int x = 0; x < height; x++) {
            if (map[x]) {
                for (int y = 0; y < width; y++) {
                    delete map[x][y];
                }
                delete[] map[x];
            }
        }
        delete[] map;
        throw; // Re-throw the exception
    }

    // create some rocks
    for (int x = 0; x < height; x++)
        for (int y = 0; y < width; y++)
            if ( x == 0 || y == 0 || x == (height-1) || y == (width-1) )
                 map[x][y] -> add( new Rock() );

    tom = new Tom();
    // add tom to the middle of the map
    tom -> setLocation( this, width/2,height/2);
}

Cave::~Cave() {
    for (int x = 0; x < height; x++) {
        for (int y = 0; y < width; y++) {
            delete map[x][y]; // assuming Location has a proper destructor
        }
        delete[] map[x];
    }
    delete[] map;
    // delete tom; // if tom is dynamically allocated
}


//Copy constructor
Cave::Cave(const Cave &c) : width(c.width), height(c.height)
{
    // width = c.width;
    // height = c.height;
    // tom = c.tom;
    map = new Location**[height];
    for (int x = 0; x < height; ++x) {
        map[x] = new Location*[width];
        for (int y = 0; y < width ; ++y) {
            map[x][y] = new Location(*(c.map[x][y]));
        }
    }
    // // Copy the rocks from the original cave
    // for (auto thing : *c.map[width][height]->getThings()) {
    //     if (dynamic_cast<Rock*>(thing)) {
    //         // Create a new Rock and add it to the new Location
    //         map[width][height]->add(new Rock());
    //     }
    // }
    // Copy any other necessary members, like Tom
    tom = new Tom(*c.tom);
}

Cave& Cave::operator=(const Cave& other) {
    if (this != &other) {
        // Clean up existing resources
        // Delete old map
        // (delete logic here)

        // Deep copy
        width = other.width;
        height = other.height;
        map = new Location**[height];
        for (int x = 0; x < height; ++x) {
            map[x] = new Location*[width];
            for (int y = 0; y < width; ++y) {
                map[x][y] = new Location(*(other.map[x][y]));
            }
        }
    }

    return *this;
}

void Cave::command (string userCommand)
{
    if (Move().triggersOn(userCommand))
        Move().fire(*this, userCommand);
    else if (Place().triggersOn(userCommand))
        Place().fire(*this, userCommand);
    else if (Throw().triggersOn(userCommand))
        Throw().fire(*this, userCommand);
    else if (userCommand == "explode")
        Explode().fire(*this, userCommand);
    else
        cerr << "tom doesn't know how to "+userCommand << endl;;
}

void Cave::show()
{
    vector<Thing*>* thingsWithTom = map[tom -> getX()][tom -> getY()] -> getThings();

    for (int y = 0; y < width; y++)
    { // for all rows
        for (int x = 0; x < height; x++) // for all columns
            cout << map[x][y] -> show(); // output whatever we find there

        cout << "  "; // list the things at this location
        if (y <  (int) thingsWithTom -> size())
            cout << (*thingsWithTom)[y] -> getName();

        cout << endl;
    }

    cout << endl;
}



