#include <iostream>
using namespace std;

class baseclass final
{
public :
    virtual void perkenalan()
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

int main ()
{
    derivedclass a;
    a.perkenalan();

    return 0;
}