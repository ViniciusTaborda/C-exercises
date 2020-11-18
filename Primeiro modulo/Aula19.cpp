#include <iostream>
using namespace std;

int main() {

     //switch
     int month;

     cout << "Enter a month: " << endl;
     cin >> month;
     int numberOfDays;
     
     
     switch (month)
     {

     case 2:
          numberOfDays = 28;
          cout << "Days in this month: " << numberOfDays <<  endl;
          break;

     case 1:
     case 3:
     case 5:
     case 7:
     case 8:
     case 10:
     case 12:
          numberOfDays = 31;
          cout << "Days in this month: " << numberOfDays <<  endl;
          break;

     case 4:
     case 6:
     case 9:
     case 11:
               numberOfDays = 30;
               cout << "Days in this month: " << numberOfDays <<  endl;
               break;

     
     default:
          cout << "That's not a valid month..." <<  endl;
     }
     
    return 0;
}


