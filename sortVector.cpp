#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  vector<int> v(5);
  cout << "enter a array value: ";
  for (int i = 0; i < v.size(); i++)
  {
    cin >> v[i];
  }
  for (int i = 0; v.size(); i++)
  {
    cout << v[i] << " ";
  }
  cout << endl;

  sort(v.begin(), v.end());

  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
  cout << endl;
}