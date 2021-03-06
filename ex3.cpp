#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  cout << setiosflags(ios::right);
  // cout << "    1\t2\t3\t4\t5\t6\t7\t8\t9" << endl;
  for (int x = 1; x < 10; x++) {
    int width = 0;
    if (x == 1) {
      width = 5;
    } else {
      width = 2;
    }
    cout << setw(width) << x << '\t';
  }
  
  cout << endl;
  for (int c = 1; c < 10; c++) {
    cout << c << "| ";
    for (int i = 1; i < 10; i++) {
      cout << setw(2) << i * c << '\t';
    }
    cout << endl;
  }
  return 0;
} 