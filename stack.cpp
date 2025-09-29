#include<iostream>
#include<stack>
using namespace std ;
int main () {
    stack<int> s ;

    s.push(1);
    s.push(2);
    s.push(3);

    stack<int> s2;

    s2.swap(s);

  cout <<"size of s is :" << s.size() << endl;
  cout << "size of s2 is :"<< s2.size() << endl;
    
    
   

    return 0;

} 