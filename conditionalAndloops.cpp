#include <iostream>
using namespace std;

int main() {
/*     int a;
    cin>>a;

   //cout<< "value of n is : " << n << endl;
    //if a is positive

    if(a>0) {
        cout<<"A is positive " << endl;
    }
    else{
        cout << " A is negative";
    }
*/

/*cin >> a >> b ;

a = cin.get();

cout <<"value of a and b is " << a << " " << b << endl;

a = cin.get();
cout <<" value of a is : " << a << endl;

    int a , b;
   

    cout << " Enter the value of a " << endl;
    cin >> a;

    cout << "Enter the value of b " << endl;
    cin >> b;
    
    if(a>b) {
        cout <<"A ia greater " << endl;
    }
    if(b>a) {
        cout <<"B is greater " << endl;
    }


    int a ;

    cout<< "Enter a values" << endl;
    cin >> a;

    if(a>0) {
        cout<< "a is positive" << endl;
    }
    else if(a<0) {
        cout<< "a is negative" << endl;
    }
    else{
        cout<<"a is 0" ;
    }
*/
    //values of sum odd numbera is ->
    int n ;
    int i = 1;
    int sum = 0;

    cout << "Enter n value :" << endl;
    cin >>n;

    while(i<=n) {
        sum = sum + i ;
        i = i + 2;
    }

    cout << " value of sum odd numbers is : " << sum << endl;

        
}






