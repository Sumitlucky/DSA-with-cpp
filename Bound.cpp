#include<iostream>
using namespace std;

int firstOcc( int arr[], int n, int key) {
    int start = 0;
    int end = n-1;
    int mid = start + ((end-start)/2);
    int ans = -1;
    while(start<=end){

        if(arr[mid] == key) {
                ans = mid;
                end = mid - 1;
        }
        else if( key < arr[mid]) {
                start = mid + 1;

        }
        else if( key > arr[mid]){
                end = mid - 1;
        }
        mid = start + ((end - start)/2);
    }
    return ans;
}
int lastOcc( int arr[], int n, int key) {
    int start = 0;
    int end = n-1;
    int mid = start + ((end-start)/2);
    int ans = -1;
    while(start<=end){

        if(arr[mid] == key) {
                ans = mid;
                start = mid + 1;
        }
        else if( key < arr[mid]) {
                start = mid + 1;

        }
        else if( key > arr[mid]){
                end = mid - 1;
        }
        mid = start + ((end - start)/2);
    }
    return ans;
}


int main() {

    int even[8] = { 2,4,6,8,8,8,10,12};
   
    cout << " first occurrence of 8 is at index : " << firstOcc(even,8,8) << endl;
    cout << " last occurrence of 8 is at index : " << lastOcc(even, 8 , 8) << endl;
    return 0; 
}