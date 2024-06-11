#include <iostream>
using namespace std;

int main() {
  int sila;
  cout << "Masukkan sila ke- : ";
  cin >> sila;

  switch (sila) {
  case 1:
    cout << "Ketuhanan Yang Maha Esa" << endl;
    break;
  case 2:
    cout << "Kemanusiaan yang adil dan beradap" << endl;
    break;
  case 3:
    cout << "Persatuan Indonesia" << endl;
    break;
  case 4:
    cout << "Kerakyatan yang dipimpin oleh hikmat kebijaksanaan" << endl
         << "dalam permusyawaratan/perwakilan" << endl;
    break;
  case 5:
    cout << "Keadilan bagi seluruh rakyat Indonesia" << endl;
    break;
  default:
    cout << "Tidak ada" << endl;
    break;
  }

  return 0;
}