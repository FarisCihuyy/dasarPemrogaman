#include <iostream>
using namespace std;

int main() {
  string laptop[2][3] = {{"Lenovo", "Asus", "Axio"},
                         {"HP", "ChromeBook", "Infinix"}};

  cout << "Secara Manual" << endl;
  cout << "Merek Laptop : " << laptop[0][0] << endl;
  cout << "Merek Laptop : " << laptop[0][1] << endl;
  cout << "Merek Laptop : " << laptop[0][2] << endl;
  cout << "Merek Laptop : " << laptop[1][0] << endl;
  cout << "Merek Laptop : " << laptop[1][1] << endl;
  cout << "Merek Laptop : " << laptop[1][2] << endl;

  cout << "Secara Otomatis" << endl;
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      cout << "Merek Laptop : " << laptop[i][j] << endl;
    }
  }

  return 0;
}