#include <iostream>
using namespace std;
class Teknologi {
public:
  string nama, warna;
  int harga;
  void print_data() {
    cout << "Nama     : " << nama << endl;
    cout << "Warna    : " << warna << endl;
    cout << "Harga    : " << harga << endl;
  }
};

int main() {
  Teknologi laptop;
  laptop.nama = "Lenovo";
  laptop.warna = "Black";
  laptop.harga = 6000000;
  laptop.print_data();

  return 0;
}