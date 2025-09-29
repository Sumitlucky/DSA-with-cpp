// #include<iostream>
// using namespace std;
// void selectionSort(int arr[], int n) {
//     for(int i = 0; i < n-1; i++) {
//         int minIndex = i;

//         for(int j = i+1; j<n; j++) {
//             if(arr[j] < arr[minIndex])
//                 minIndex = j;
//         }
//         swap(arr[minIndex], arr[i]);
//     }
// }
// int main() {
//    int arr[8] = {12,11,9,7,5,4,6,10};

//    cout << "sorted array :" << selectionSort(arr,8) << endl;
    
//     return 0;
// }
#include<iostream>
using namespace std;
int main () {
    int sum = 0;
    for(int i = 1; i<=15; i=i+2) {
        cout << i << endl;
        sum = sum + i;
    }
    cout << endl;
}