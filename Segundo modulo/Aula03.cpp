#include <iostream>
using namespace std;

int main() {
 
     //               0   1   2    3    4   5
     int values[] = {32, 34, 454, 123, 65, 7};

     cout << values[3] << endl;     

     cout << sizeof values / sizeof values[0] << endl;

    return 0;
}


