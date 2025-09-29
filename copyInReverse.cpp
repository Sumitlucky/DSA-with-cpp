#include <iostream>
using namespace std;

int mian()
{

  int arr[] = {10, 20, 30, 40, 50, 60};

  int n = sizeof(arr) / 4;

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  int brr[n];
  for (int i = 0; i < n; i++)
  {
    brr[i] = arr[n - 1 - i]; // b[i] = a[j]
                             // i + j = n-1
                             // b[i] = a[n-1-i]
    }
  for (int i = 0; i < n; i++)
  {
    cout << brr[i] << " ";
  }
  cout << endl;
}