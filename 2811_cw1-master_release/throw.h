#ifndef THROW_H
#define THROW_H

#include "coin.h"
#include "command.h"
#include "mushroom.h"
#include "rock.h"
#include <iostream>


using namespace std;


class Throw : public Command
{
public:
    Throw() : Command("throw"){};
    void fire(Cave& c, string userCommand);
    string mid(string UserCommand);
};

#endif // THROW_H
