#include <iostream>
using namespace std;

int factorial(int n) {

    int fact = 1;
    for(int i = 1; i<=n; i++) {
        fact = fact * i;
    }
    return fact;
}

int nCr(int n,int r) {
    int num = factorial(n);

    int denom = factorial(r) * factorial(n-r);

    return num/denom;

    
}

int main() {
    int n;
    cout << " Enter the n value" <<endl;
    cin >> n;
    int r;
    cout << "Enter the r value" <<endl;
    cin >> r;
    cout << "Answer is : " << nCr(n,r) << endl;
}