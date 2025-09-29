#include <iostream>
#include <algorithm> // for swap
using namespace std;

int main()
{
  int arr[] = {10, 20, 30, 40, 50, 60};

  int n = sizeof(arr) / 4;

  cout << "Original Array: ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  int a = 0;
  int j = n - 1;

  while (a < j)
  {
    swap(arr[a], arr[j]);
    a++;
    // j--;
  }

  cout << "Reversed Array: ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}
