#include <iostream>
using namespace std;

int binarySearch( int arr[],int size , int key ) {
    
    int start = 0;
    int end = size-1;

    int mid = start + ((end - start)/2);
    while(start <= end) {
        if(arr[mid] == key) {
            return mid;
        }
        if(key > arr[mid]) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
        mid = start + ((end - start)/2);
    }
    return -1;

}


int main() {

    int even;
    cin >> even;
    cout << "  Enter the even value " << even << endl;
    int odd;
    cin >> odd;
    cout << "  Enter the odd value " << even << endl;
  
}  