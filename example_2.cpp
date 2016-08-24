#include <iostream>
using namespace std;

int main() {
    
    long input_num = 0;
    
    
    cout << "Enter a number (-1 to exit)" << endl;
    do {
        
        if(!(cin >> input_num)) {
            cout << "Please enter numbers only." << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        } 
        
        if (input_num != -1) {
            cout << "You entered " << input_num << endl;
        }
        
    } while (input_num != -1);
    
    cout << "All done." << endl;
    
    return 0;
    
    
}