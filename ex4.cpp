#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
    
    srand(time(NULL));
    int secret = rand() % 100;
    int guess;
    
    cout << "Guess a number between 0 and 100"<< endl;
    
    do {
        
        while (!(cin >> guess)) {
            cout << "Only numbers please" << endl;
            cin.clear();
            cin.ignore(10000, '\n');
        }
    
        if (secret < guess) {
            cout << "Too high" << endl;
        } else if (secret > guess) {
            cout << "Too low" << endl;
        } else {
            cout << "Congratulations, it was " << secret << "!" << endl;
        }
    
    } while(!(guess == secret));
    
    return 0;
}