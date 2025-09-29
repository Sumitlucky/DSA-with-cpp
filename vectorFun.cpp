#include <iostream>
#include <vector>
using namespace std;

int main() {

/*
    vector<int> vec;
    vec.push_back(1);// add the element
    vec.push_back(2);//   ||
    vec.push_back(3);//   ||
    vec.push_back(4);//   ||
    vec.push_back(5);//add the element
    
    vec.emplace_back(6);
    vec.pop_back();//Delete the last element

    cout<<"size of element :" << vec.size() << endl; // find the size
    cout <<"capacity of the vector :"<< vec.capacity() << endl; //find the capacity

    for(int val : vec) {
        cout << val << " ";
    }
    cout << endl;
    
    cout << " value at index 2 : " << vec[2] << " or " << vec.at(2) << endl;

    cout << "front  :" << vec.front() << endl;
    cout << "back : " << vec.back() << endl;
    return 0;

    vector<int> vec(3,10);//print same element in many times

    for( int val : vec) {
        cout << val << " "; 
    }
    cout << endl;


    return 0;
*/    
    vector<int> vec = {1,2,3,4,5,6};

    cout << vec.capacity() << endl;
    cout << vec.size() << endl;

    vec.insert(vec.begin() + 2,100);

  
    for ( int val : vec) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}