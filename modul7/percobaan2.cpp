#include <iostream>
using namespace std;

void tambah(int a, int b) {
  int hasil = a + b;
  cout << "Hasil : " << hasil << endl;
}

int main() {
  int a, b;
  cout << "Masukkan bilangan pertama : ";
  cin >> a;
  cout << "Masukkan bilangan kedua : ";
  cin >> b;

  tambah(a, b);

  return 0;
}