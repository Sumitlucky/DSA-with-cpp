#include<iostream>
#include <list>

using namespace std;

int main() {
    list<int> l = { 1,2,3,4,5,6};

   

    for( int val : l) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}