#include <iostream>
using namespace std;


int main() {

     //sum the numbers until it number equals -1

     float number = 0;
     int total = 0;
     int counter = -1;
     float avg = 0;

     while (number != -1) {
          total += number;
          cout << "Enter a number to sum or -1 to finish: " << endl;
          cin >> number;
          counter ++;
          
          
     }

     if (counter > 0){
          avg = (double)total / ((double)counter);
          cout << counter <<endl;

     }
     

     cout << "Total: " << total <<endl;
     cout << "Average: " << avg <<endl;
     cout << "END..." <<endl;

     
    return 0;
}


