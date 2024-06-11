#include <iostream>
using namespace std;

int main()
{
    string laptopName = "Lenovo V14 G2 Alc";
    string operatingSystem = "Windows 11";
    string caseColor = "Iron Grey";
    string speakers = "Stereo Speakers";

    int price = 5999900;
    int memory = 8;
    int storage = 256;
    int camera = 720;

    float weight = 1.6;
    bool touchscreen = false;

    cout << "Nama Laptop    : " << laptopName << endl;
    cout << "Harga          : " << price << endl;
    cout << "Sistem Operasi : " << operatingSystem << endl;
    cout << "Warna Laptop   : " << caseColor << endl;
    cout << "Speaker        : " << speakers << endl;
    cout << "RAM            : " << memory << endl;
    cout << "Storage        : " << storage << endl;
    cout << "Kamera         : " << camera << endl;
    cout << "Berat          : " << weight << endl;
    cout << "Layar sentuh   : " << touchscreen << endl;

    return 0;
}