#include<iostream>
#include<vector>
using namespace std;

int main () {
    vector<int> vec = {1,2,3,4,5};

    vector<int>:: iterator it ; // forward iterator
    vector<int>:: reverse_iterator it2;

    for(it = vec.begin(); it!= vec.end(); it++) {
        cout << *(it) << " " ;

    }
    cout << endl;

    for(it2 = vec.rbegin(); it2!= vec.rend(); it2++) {
        cout << *(it2) << " " ;
    }
    return 0;
}