#include<iostream>
using namespace std;

int main() {
    int n;
   

    int j = 1;
    cin >> n;

    while(j<=n) {
        int i = 1;
        while(i<=n) {
            cout << i;
            i = i + 1;
        }
        cout << endl;
        j = j+1;

    }

}