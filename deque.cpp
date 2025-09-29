#include<iostream>
#include<deque>

using namespace std;

int main () {
    deque<int> d = {1,2,3,4,5,};


    d.pop_back();
    d.push_back(20);


    for(int val : d) {
        cout << val << " ";
    }
    cout << endl;

    cout << d[2] << " " << endl;
    //pair value print
    pair<string, int> p = {"sumit komal",4};

    cout << p.first << endl;
    cout << p.second << endl;
    //pair with into the pair
    pair<int, pair<char,int>> p2 = {5,{'i', 10}};

    cout << p2.first << endl;
    cout << p2.second.first << endl;
    cout << p2.second.second  << endl;
    return 0;
}