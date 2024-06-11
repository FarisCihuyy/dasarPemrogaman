#include <iostream>
using namespace std;

int main() {

  int bil;

  cout << "Masukkan sebuah bilangan : ";
  cin >> bil;

  if (bil >= 0) {
    cout << bil << " adalah bilangan positif" << endl;
  } else {
    cout << bil << " adalah bilangan negatif" << endl;
  }

  return 0;
}