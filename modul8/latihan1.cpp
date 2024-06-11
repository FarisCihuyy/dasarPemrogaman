#include <iostream>
using namespace std;
// Global Variabel
int count = 0;

void hit_me() {
  // Local Variable
  int secound_number = 2;
  cout << "Local Variable " << secound_number << endl;
  cout << "Global Variable : " << count << endl;
}

int main() {
  // Local Variable
  int first_number = 1;
  cout << "Local Variable " << first_number << endl;
  cout << "Global Variable : " << count << endl;
  hit_me();

  return 0;
}