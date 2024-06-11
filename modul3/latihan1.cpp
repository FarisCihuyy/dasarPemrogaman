#include <iostream>
using namespace std;

int main() {
  string laptop[6] = {"Lenovo", "Asus", "Axio", "HP", "ChromeBook", "Infinix"};

  cout << "Secara manual" << endl;
  cout << "Merek Laptop : " << laptop[0] << endl;
  cout << "Merek Laptop : " << laptop[1] << endl;
  cout << "Merek Laptop : " << laptop[2] << endl;
  cout << "Merek Laptop : " << laptop[3] << endl;
  cout << "Merek Laptop : " << laptop[4] << endl;
  cout << "Merek Laptop : " << laptop[5] << endl;

  cout << "Secara Otomatis" << endl;
  for (int i = 0; i < 6; i++) {
    cout << "Merek Laptop : " << laptop[i] << endl;
  }

  return 0;
}