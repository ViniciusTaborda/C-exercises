#include <iostream>
using namespace std;

int main() {

    float radius;
    const float PI = 3.1415;

    //extraction operator
    cout << "Digite o Raio da circuferencia:";
    cin >> radius;

    //calc
    float resultArea = (radius * radius) * PI;
    float resultPer = radius * ( PI * PI );

    //insertion operator
    cout << "A valor da area do circulo é:";
    cout << resultArea << endl;

    cout << "A valor do perimetro do circulo é:";
    cout << resultPer << endl;

    return 0;
    
}

