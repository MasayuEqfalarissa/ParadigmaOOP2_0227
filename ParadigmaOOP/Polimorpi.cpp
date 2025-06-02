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

class Joko
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

int main()
{
    seseorang *obyek;
    Joko a;
    Lia b;
    
    obyek = &a;
    obyek->pesan();
    obyek = &b;
    obyek->pesan();
    //a.seseorang::pesan();
    //b.seseorang::pesan();

    return 0;
}