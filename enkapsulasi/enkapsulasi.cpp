// enkapsulasi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class remotlampu {
private:
    string saklarNo[10];
public:
    void setsaklarNo(int i, string value) {
        saklarNo[i] = value;
    }
    string getsaklarNo(int i) {
        return saklarNo[i];
    }
};

int main()
{
    remotlampu lampurumah;

    lampurumah.setsaklarNo(0, "lampu teras rumah");
    lampurumah.setsaklarNo(1, "lampu ruang tamu");
    lampurumah.setsaklarNo(2, "lampu kamar tidur");
    lampurumah.setsaklarNo(3, "lampu dapur");

    cout << lampurumah.getsaklarNo(0) << endl;
    cout << lampurumah.getsaklarNo(1) << endl;
    cout << lampurumah.getsaklarNo(2) << endl;
    cout << lampurumah.getsaklarNo(3) << endl;

    return 0;

}
