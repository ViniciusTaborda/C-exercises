#include <iostream>
using namespace std;

int main() {

    float radius;

    //extraction operator
    cout << "Digite o Raio da circuferencia:";
    cin >> radius;

    //calc
    float resultArea = (radius * radius) * 3.1415;
    float resultPer = radius * ( 3.1415 * 3.1415 );

    //insertion operator
    cout << "A valor da area do circulo é:";
    cout << resultArea << endl;

    cout << "A valor do perimetro do circulo é:";
    cout << resultPer << endl;

    return 0;
    
}

