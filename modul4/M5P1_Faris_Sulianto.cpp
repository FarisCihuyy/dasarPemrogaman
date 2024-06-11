#include <iostream>
using namespace std;

int main() {
  int jml;

  cout << "Masukkan Jumlah perulangan";
  cin >> jml;

  for (int i = 1; i <= jml; i++) {
    for (int j = 1; j <= jml; j++) {
      cout << j << " ";
    }
    cout << endl;
  }

  for (int i = 1; i <= jml; i++) {
    for (int j = jml; j >= 1; j--) {
      if (j <= i) {
        cout << "* ";
      } else {
        cout << "  ";
      }
    }
    cout << endl;
  }

  for (int i = 1; i <= jml; i++) {
    for (int j = 1; j <= jml; j++) {
      if (j <= i) {
        cout << "* ";
      } else {
        cout << "  ";
      }
    }
    cout << endl;
  }

  return 0;
}