#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int count = 1;
    int col = 1;
    while(col<=n) {
        int row = 1;
        while(row<=col) {
            cout<< count <<" ";
            count = count + 1;
            row= row + 1;
        }
        cout<<endl;
        col = col + 1;
    }
} 