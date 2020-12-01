#include <iostream>
using namespace std;

int main() {
 

     /*

     What is a pointer?

     -------------------------------------

     Pointer is a variable whose valule is 
     the address of another variable, i.e., 
     direct address of the memory location.

     */


    int value = 98765;
    int &ref = value;
    int *pot = &value;


    cout << value << "\t" << ref << "\t" << pot << endl;


    return 0;
}


