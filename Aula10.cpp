#include <iostream>
using namespace std;


int main() {

    bool sunny = false;
    
    //exp(T/F) ? T : F 

    string result = sunny ? ":) sunny day" : ":( Not  a sunny day";

    cout << result << endl;

    double balance = 1234.56;
    double value;

    cout << "Enter the value: ";
    cin >> value;

    char creditOrDebit;
    cout << "Credit (c) / Debit (d): ";
    cin >> creditOrDebit;

    cout << "Balance [Before]: " << balance << endl;

    balance += creditOrDebit == 'c' ? value : -value;

    cout << "Balance [After]: " << balance << endl;


    return 0;
}


