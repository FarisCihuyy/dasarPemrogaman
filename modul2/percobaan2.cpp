#include <iostream>
using namespace std;
struct mahasiswa
{
    string nama;
    int usia;
    float ipk;
    string hobi[2];
};
int main()
{
    mahasiswa mhs;

    mhs.nama = "Andi";
    mhs.usia = 21;
    mhs.ipk = 3.5;
    mhs.hobi[0] = "Renang";
    mhs.hobi[1] = "Futsal";
    cout << mhs.nama << endl;
    cout << mhs.usia << endl;
    cout << mhs.ipk << endl;
    cout << mhs.hobi[0] << endl;
    cout << mhs.hobi[1] << endl;
    system("pause");
    return 0;
}
