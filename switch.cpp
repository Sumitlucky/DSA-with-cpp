#include<iostream>
using namespace std;
int main() {
    int num = 3;

    cout << endl;
    switch( num ) {

        case 1: cout << "first" << endl;
        break;

        case 2: cout << "second" << endl;
        break;

        default: cout << "it is default case" <<endl;
    }
    cout << endl;
}