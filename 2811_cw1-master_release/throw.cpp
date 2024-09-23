#include "throw.h"
#include "thing.h"

void Throw::fire (Cave &c, string userCommand)
{
    int ObjectX = c.getTom()->getX(), ObjectY = c.getTom()->getY();
    string dir = userCommand;
    for (int i = 0; i < 2; i++){
        dir = dir.substr(dir.find(' ')+1, dir.length());
    }

    if (dir[0] == 'w')
        ObjectX--;
    else if  (dir[0] == 'n')
        ObjectY--;
    else if (dir[0] == 'e')
        ObjectX++;
    else if (dir[0] == 's')
        ObjectY++;
    else {
        cerr << "object can't be thrown \"" << dir << "\"" << endl;
        return;
    }
    Location* loc = c.getMap()[ObjectX][ObjectY];
    string s = mid(userCommand);

    if (ObjectX < 0 || ObjectY < 0 || ObjectX >= c.getHeight() || ObjectY >= c.getHeight())
    {
        cerr << "can't throw something into the void" << endl;
        return;
    }
    else if ( c.getMap()[ObjectX][ObjectY] -> isBlocking() )
    {
        cerr << "something is blocking the way" << endl;
        return;
    }
    else
    {
        if (s.compare("coin")==0)
            loc ->add(new Coin());
        else if (s.compare("mushroom")==0)
            loc ->add(new Mushroom());
        else
            cerr << "I don't know how to throw a " << userCommand << endl;
    }
}

string Throw::mid(string UserCommand) {
    string theCommand = UserCommand;
    theCommand = theCommand.substr(theCommand.find(' ')+1, theCommand.length());
    theCommand = theCommand.substr(0, theCommand.find(' '));
    return theCommand;
};
