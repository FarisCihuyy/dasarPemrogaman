#include <iostream>
using namespace std;

int main() {

  int n;
  cout << "Masukkan Jumlah Baris : ";
  cin >> n;

  // cetak baris
  for (int i = 0; i < n; i++) {
    // cetk kolom
    for (int j = 0; j < 2 * n - 1; j++) {
      // jika j berada di rentang n-i-1
      if (j >= n - i - 1 && j <= n + i - 1) {
        cout << "* "; // Cetak *
      } else {
        cout << "- "; // Cetak -
      }
    }
    cout << endl;
  }

  return 0;
}