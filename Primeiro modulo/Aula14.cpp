#include <iostream>
using namespace std;


int main() {

     //sum the numbers until it number equals -1

     int number = 0;
     int total = 0;

     while (number != -1) {
          total += number;
          cout << "Enter a number to sum or -1 to finish: " << endl;
          cin >> number;
          
     }

     cout << "Total: " << total <<endl;
     cout << "END..." <<endl;

     
    return 0;
}


