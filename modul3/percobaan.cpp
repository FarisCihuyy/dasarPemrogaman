#include <iostream>
using namespace std;

int main() {
  string nama[3] = {"Andi", "Budi", "Anggi"};

  cout << "Menampilkan secara manual" << endl;
  cout << "Nama : " << nama[0] << endl;
  cout << "Nama : " << nama[1] << endl;
  cout << "Nama : " << nama[2] << endl;

  cout << "Menampilkan dengan menggunakan for " << endl;
  for (int i = 0; i < 3; i++) {
    cout << "Nama : " << nama[i] << endl;
  }

  return 0;
}