#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n) {

    for(int i=0; i<n-1; i++) {
        bool isSwap = false;
        for(int j=0; j<n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j],arr[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap){//array is already sorted  
            return;
        }
    }
}


void selectionSort(int arr[], int n) {

    for( int i = 0; i<n-1; i++) {
        int smallestIdx = i;
        for(int j = i+1; j<n; j++) {
            if(arr[j] < arr[smallestIdx]){
                smallestIdx = j;
            }
        }
        swap(arr[i], arr[smallestIdx]);
    }
}

void insertionSort(int arr[], int n) {
    for(int i = 1; i<n; i++) {
        int curr = arr[i];
        int prev = i-1;

        while( prev >= 0 && arr[prev] > curr) {
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1] = curr;
    }
}

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n = 5;
    int arr[] = {4,1,5,2,3};
    int arr1[] = {3,4,5,7,3};
    int arr2[] = {6,7,9,10,5};
    cout<<"selection sort is :" << endl;
    selectionSort(arr,n);
    printArray(arr,n);
    cout<<"bubble sort is :" << endl;
    bubbleSort(arr1,n);
    printArray(arr1,n);
    cout<<"insertion sort is :" << endl;
    insertionSort(arr2,n);
    printArray(arr2,n);
    return 0;
}