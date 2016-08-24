#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  
  for (int x = 0; x < 6; x++) {
    
    for (int y = 0; y < 4; y++) {
      cout << left << setfill(' ') << setw(17) << "Hello";
    }
    
    cout << endl;
  }

}
