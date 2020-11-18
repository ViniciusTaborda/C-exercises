#include <iostream>
using namespace std;


int main() {

     //print the biggest number between 3 input numbers

     int number1;
     int number2;
     int number3;

     cout << "Enter a number: " << endl;
     cin >> number1;

     cout << "Enter a number: " << endl;
     cin >> number2;

     cout << "Enter a number: " << endl;
     cin >> number3;

     if ((number1 > number2) && (number1 < number3)){
          cout << "This is the biggest number: " << number1 <<endl;

     }else if (number2 > number3){
          cout << "This is the biggest number: " << number2 <<endl;
     }else {
          cout << "This is the biggest number: " << number3 <<endl;

     }
    return 0;
}


