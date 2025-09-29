#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int n;
  cout << "Enter the array size : ";
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << "  ";
  }
}
