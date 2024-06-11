#include <iostream>
using namespace std;
void result(int a, char opr, int b) {
  int hasil;
  switch (opr) {
  case '+':
    hasil = a + b;
    break;
  case '-':
    hasil = a - b;
    break;
  case '%':
    hasil = a % b;
    break;
  case '/':
    if (b != 0) {
      hasil = a / b;
    } else {
      cout << "Tidak terdefinisi" << endl;
      return;
    }
    break;
  case '*':
    hasil = a * b;
    break;
  default:
    cout << "Operator tidak ada" << endl;
    return;
    break;
  }
  cout << "Hasil : " << hasil << endl;
}

int main() {
  int a, b;
  char aritmatika;
  cout << "Masukkan bilangan pertama : ";
  cin >> a;
  cout << "Pilih operator (+, -, %, /, *) : ";
  cin >> aritmatika;
  cout << "Masukkan bilangan kedua : ";
  cin >> b;
  result(a, aritmatika, b);
  return 0;
}