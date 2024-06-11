#include <iostream>
using namespace std;

struct kendaraan
{
    string nama;
    int harga;
    float berat;
};

int main()
{
    kendaraan motor;
    motor.nama = "Beat";
    motor.harga = 15000000;
    motor.berat = 89.1;

    cout << "Nama    : " << motor.nama << endl;
    cout << "Harga   : " << motor.harga << endl;
    cout << "Berat   : " << motor.berat << endl;

    return 0;
}