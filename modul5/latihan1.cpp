#include <iostream>
using namespace std;

int main() {

  int nilai;
  cout << "Masukkan sebuah nilai : ";
  cin >> nilai;

  if (nilai < 0) {
    nilai *= nilai;
    cout << "Nilai berubah : " << nilai << endl;
  } else {
    cout << "Nilai tetap : " << nilai << endl;
  }

  return 0;
}