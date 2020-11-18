#include <iostream>
using namespace std;


int main() {

     //print the number until it equals -1

     int number = 0;

     while (number != -1) {
          cout << "Enter a number or -1 to finish: " << endl;
          cin >> number;
          cout << "This is your number: " << number <<endl;
     }
     
     cout << "END..." <<endl;

     
    return 0;
}


