#include <iostream>
using namespace std;

struct Teknologi {
  string nama, warna;
  int harga;
};

int main() {
  Teknologi laptop;
  laptop.nama = "Lenovo";
  laptop.warna = "Black";
  laptop.harga = 6000000;

  cout << "Nama     : " << laptop.nama << endl;
  cout << "Warna    : " << laptop.warna << endl;
  cout << "Harga    : " << laptop.harga << endl;

  return 0;
}