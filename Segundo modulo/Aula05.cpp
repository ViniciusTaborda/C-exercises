#include <iostream>
using namespace std;

void sayHello(){
     cout << "Hello world!" << endl;

     return;
}

void sayHelloTo(string name) {
     cout << "Hello " << name << "!" << endl;
}

string returnHi(){


     return "Hi!" ;
}


int main() {
 
     sayHello();
     sayHelloTo("Vine");

     string result = returnHi();

     cout << result << endl;
     
     cout << returnHi() << endl;


    return 0;
}


