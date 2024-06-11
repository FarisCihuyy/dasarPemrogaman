#include <iostream>
using namespace std;

int result(int a, char opr, int b) {
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
    hasil = a / b;
    break;
  case '*':
    hasil = a * b;
    break;
  default:
    cout << "Operator tidak ada" << endl;
    break;
  }
  return hasil;
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

  int hasil = result(a, aritmatika, b);
  cout << hasil << endl;

  return 0;
}