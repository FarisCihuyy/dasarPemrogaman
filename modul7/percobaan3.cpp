#include <iostream>
using namespace std;

int tambah(int a, int b) {
  int hasil = a + b;
  return hasil;
}

int main() {
  int a, b, hasil;
  cout << "Masukkan bilangan pertama : ";
  cin >> a;
  cout << "Masukkan bilangan kedua : ";
  cin >> b;

  hasil = tambah(a, b);
  cout << "Hasi : " << hasil << endl;

  return 0;
}