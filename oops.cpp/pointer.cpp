#include <iostream>
using namespace std;

int main () {
    // what is a pointer? -->It is a Data type which holds the addresss of other data types
    
    int a = 3;
    int* b = &a;
    // & ----> (Address of) operator
    cout <<" the address of a is "<< &a << endl;
    cout <<" the address of a is " << b << endl;
    // * ----> Dereference operator

    cout << "the value of address pf b is" << *b << endl;

    return 0;
}
