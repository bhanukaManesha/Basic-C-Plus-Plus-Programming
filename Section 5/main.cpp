#include <iostream>
using namespace std;


int main(){
    
    // Value is constant
    const double PI = 3.14592;

    // Pointer is constant
    int value = 8;
    const int * const pValue = &value;

    cout << *pValue <<endl;

    int number = 11;
    pValue = &number; // Error when changing the reference
    *pValue = 12;      // Error when changing the value

    cout << *pValue <<endl;

    return 0;
}