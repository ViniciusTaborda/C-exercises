#include <iostream>
using namespace std;


int main() {

     double finalGrade;
     cout << "Enter your final grade: " << endl;
     cin >> finalGrade;


     if ((finalGrade >= 7) && (finalGrade <= 10)){
          cout << "Excellent grade!" << endl;
          cout << "Congratulations my friend!" << endl;

     }else if ((finalGrade >= 0) && (finalGrade < 7)){
          cout << "You need to study more..." << endl;
     }else {
          cout << "That's not a valid grade." << endl;

     }
     
     


    return 0;
}


