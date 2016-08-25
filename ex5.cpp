#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  cout << setw(9) << "horses";
  cout << setw(9) << "pigs";
  cout << setw(9) << "rabbits" << endl;

  for (int h = 0; h < 100; h++) {
    for (int p = 0; p < 100; p++) {
      for (int r = 0; r < 100; r++) {
        if (h + p + r == 100 && h*10 + p*3 + r*0.5 == 100) {
          cout << setw(9) << h;
          cout << setw(9) << p;
          cout << setw(9) << r << endl;
        }
      }
    }
  }

  return 0;

}
