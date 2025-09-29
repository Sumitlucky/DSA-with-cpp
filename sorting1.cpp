#include <iostream>
#include <vector>
using namespace std;
int main()
{
  // int arr[] = { 5,3, 7, 8, 2, 6,9, 7};

  // int n = sizeof(arr)/4;
  // int minValue = arr[0];
  // int maxValue = arr[0];
  // for (int i = 0; i < n; i++)
  // {
  //   cout << arr[i] << " ";
  // }
  // cout<< endl;
  // int i = 0;
  // for(; i<n ; i++) {
  //   if(arr[i] < minValue ) {
  //     minValue = arr[i];
  //   }
  //   if( arr[i] > maxValue){
  //     maxValue = arr[i];
  //   }
  // }
  
  
  // cout<< "it is a smalllest number: "<< minValue << endl;
  // cout<< "it is a largest number: "<< maxValue << endl;

  // cout << n << endl;



int m = 9;
  for(int i = 0 ; i<=m/2 ; i++) {

    for(int j= 0 ; j<m; j++) {
      // cout << "* " ;
      if(j>=(m/2)-i && j<=(m/2)+i) {
        cout << "* " ;
      }else {
       cout<<  "  ";
      }
    }
    cout<< endl;
  }
  for(int i = 0 ; i<=m/2 ; i++) {

    for(int j= 0 ; j<m; j++) {
      // cout << "* " ;
      if(j>=(m/2)-m/2-i && j<=(m/2)+i) {
        cout << "* " ;
      }else {
       cout<<  "  ";
      }
    }
    cout<< endl;
  }
  
 
  
};  
