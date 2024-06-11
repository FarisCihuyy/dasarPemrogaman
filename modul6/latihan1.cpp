#include <iostream>
using namespace std;

int main() {
  int a, b;
  char aritmatika;
  cout << "Masukkan nilai a: ";
  cin >> a;
  cout << "Masukkan nilai b: ";
  cin >> b;
  cout << "Pilih operator (+, -, /, *, %): ";
  cin >> aritmatika;

  switch (aritmatika) {
  case '+':
    cout << "a + b = " << a + b << endl;
    break;
  case '-':
    cout << "a - b = " << a - b << endl;
    break;
  case '/':
    cout << "a / b = " << a / b << endl;
    break;
  case '*':
    cout << "a * b = " << a * b << endl;
    break;
  case '%':
    cout << "a % b = " << a % b << endl;
    break;
  default:
    cout << "Operator tidak ada" << endl;
    break;
  }
  return 0;
}