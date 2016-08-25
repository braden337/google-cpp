// Straight salary of $600 per week;
// A salary of $7.00 per hour plus a 10% commission on sales;
// No salary, but 20% commissions and $20 for each pair of shoes sold
// You, being an expert C++ programmer, figure you can write a program
// to help decide the best choice of compensation.

#include <iostream>
using namespace std;

int GetInput() {
  int sales;
  cout << "Weekly sales: ";
  while (!(cin >> sales)) {
    cout << "Only numbers please" << endl;
    cin.clear(); cin.ignore(10000, '\n');
  }
  return sales;
}

int CalcMethod1(int sales) {
  cout << "1. $" << 600 << endl;
  return 0;
}

int CalcMethod2(int sales) {
  cout << "2. $" << (40 * 7) + (0.1 * 225 * sales) << endl;
  return 0;
}

int CalcMethod3(int sales) {
  cout << "3. $" << (0.2 * 225 * sales) + 20 << endl;
  return 0;
}

int main() {

  int WeeklySales = GetInput();
  CalcMethod1(WeeklySales);
  CalcMethod2(WeeklySales);
  CalcMethod3(WeeklySales);
  return 0;

}
