#include <iostream>
using namespace std;

int main() {

    // String methods and modifiers
    string title = "Sr. ";
    string name = "Vinicius";
    string end(3, '!');
    cout << name.size() << endl;
    cout << name[5] << endl;
    cout << end << endl;

    // string concatenation

    name.append("...");

    cout << title + name + end << endl;

    return 0;
    
}


