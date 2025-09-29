#include <iostream>
using namespace std;

//1 -> Even
//0 -> odd
bool isEven(int a) {
    //odd
    if(a&1) {
        return 0;
    }
    else {
        return 1;
    }
}


int main() {
    int num;
    cin >> num;

    if (isEven(num)) { 
        cout << " number is even" <<endl;
    }
    else {
        cout << "number is odd "<<endl;
    }

    return 0;

}