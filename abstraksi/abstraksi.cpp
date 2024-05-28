// abstraksi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Abastraksiklas {
private: string x,y;
public:
    //method untuk mengisi nilai 
    //private membeer
    void setxy(string a, string b) {
        x = a;
        y = b;
    }
    //menampilkan nilai
    void display() {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }
};

int main()
{
    Abastraksiklas ak;
    ak.setxy("yogykartas", "kampus");
    ak.display();

    return 0;
}
