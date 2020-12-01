#include <iostream>
using namespace std;


int max(int n1, int n2, int n3){
     return n1 >= n2 ? n1 : n2;
}


int main() {

     //recurssion to find the biggest number

     int a, b, c;

     cout << "Enter the first number: ";
     cin >> a;

     cout << "Enter the second number: ";
     cin >> b;

     cout << "Enter the third number: ";
     cin >> c;

     cout << "Max: " << max(a, max(b, c));

 
    return 0;
}