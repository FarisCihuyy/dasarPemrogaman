#include <iostream>
using namespace std;
struct Kalender {
  int tanggal, bulan, tahun;
};

void cetak(Kalender temp) {
  cout << temp.tanggal << "/" << temp.bulan << "/" << temp.tahun << endl;
}

int main() {
  Kalender sekarang;
  sekarang.tanggal = 11;
  sekarang.bulan = 6;
  sekarang.tahun = 2024;

  cetak(sekarang);

  return 0;
}