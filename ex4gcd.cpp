#include <iostream>
using namespace std;

int gcd(int a, int b);

int main() {
  int input[2] = {};
  int x = 0;
  
  while (!(input[0] != 0 && input[1] != 0)) {
    
    while(!(cin >> input[x])) {
      cout << "Non zero integers please." << endl;
      cin.clear();
      cin.ignore(10000, '\n');
    }
    
    x++;
    
  }
  
  cout << "The GCD of (" << input[0] << ", " << input[1] << ") is " << gcd(input[0], input[1]) << endl;

  return 0;
}

int gcd(int a, int b) {
  while (a != b) {
    if (a > b) a -= b;
    else b -= a;
  }
  return a;
}

// function gcd(a, b)
//     while a ≠ b 
//         if a > b
//           a := a − b; 
//         else
//           b := b − a; 
//     return a;