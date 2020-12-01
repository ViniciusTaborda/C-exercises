#include <iostream>
using namespace std;

int main() {
 
     //moving pointer

     int arr[] = {0, 1, 2, 3, 4};

     int* p1 = &arr[0];

     cout << *p1 << endl;     
     
     p1++;
     cout << *p1 << endl;     
     
     p1++;
     cout << *p1 << endl;     

     cout << "..." << endl;     

     int w = 132;

     cout << &w << endl;     
     cout << *&w << endl;     






    return 0;
}


