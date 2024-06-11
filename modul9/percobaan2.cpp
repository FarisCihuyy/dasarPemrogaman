#include <iostream>
using namespace std;

class Kalender {
public:
  int tanggal, bulan, tahun;
  void cetak() { cout << tanggal << "/" << bulan << "/" << tahun << endl; }
};

int main() {
  Kalender sekarang;
  sekarang.tanggal = 11;
  sekarang.bulan = 6;
  sekarang.tahun = 2024;
  sekarang.cetak();

  return 0;
}