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
    mahasiswa mhs[2];

    mhs[0].nama = "Andi";
    mhs[0].usia = 21;
    mhs[0].ipk = 3.5;
    mhs[0].hobi[0] = "Renang";
    mhs[0].hobi[1] = "Futsal";

    mhs[1].nama = "Fajar";
    mhs[1].usia = 29;
    mhs[1].ipk = 2.6;
    mhs[1].hobi[0] = "Tidur";
    mhs[1].hobi[1] = "Makan";

    cout << "Nama : " << mhs[0].nama << endl;
    cout << "Usia : " << mhs[0].usia << endl;
    cout << "Ipk : " << mhs[0].ipk << endl;
    cout << "Hobi 1 : " << mhs[0].hobi[0] << endl;
    cout << "Hobi 2 : " << mhs[0].hobi[1] << endl;

    cout << "Nama : " << mhs[1].nama << endl;
    cout << "Usia : " << mhs[1].usia << endl;
    cout << "Ipk : " << mhs[1].ipk << endl;
    cout << "Hobi 1 : " << mhs[1].hobi[0] << endl;
    cout << "Hobi 2 : " << mhs[1].hobi[1] << endl;

    return 0;
}
