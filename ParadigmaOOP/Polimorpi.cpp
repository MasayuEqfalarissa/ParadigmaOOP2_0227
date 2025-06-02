#include <iostream>
using namespace std;

class seseorang 
{
public: 
    //virtual void pesan() = 0;
    virtual void pesan()
    {
        cout << "pesan dari seseorang" << endl;
    }
};

class joko
{
public: 
    void pesan()
    {
        cout << "pesan dari Lia" << endl;
    }
};

class Lia
{
public: 
    void pesan()
    {
        cout << "pesan dari Lia" << endl;
    }
};