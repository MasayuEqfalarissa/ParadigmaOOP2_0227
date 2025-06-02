#include <iostream>
using namespace std;

class baseclass 
{
public :
    virtual void perkenalan() final
    {
        cout << "hallo saya function dari base class";
    }
};

class derivedclass 
{
public:
    void perkenalan()
    {
        cout << "hallo saya function dari derived class";
    }
};

