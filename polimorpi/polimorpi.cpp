// polimorpi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class seseorang {
public:
    virtual void pesan() = 0;
    //virtual void pesan(){
    //cout << " pesan dari seseorang" << endl;
    //}
};

class joko : public seseorang {
    public
};




int main()
{
    std::cout << "Hello World!\n";
}

