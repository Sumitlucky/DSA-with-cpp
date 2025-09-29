#include <iostream>
using namespace std;
int main()
{
    // int sumit[30] = {1, 9, 3, 4, 5, 6, 7};
    // cout << sumit << endl;
    // cout << &sumit[0] << endl;
    // cout << *sumit << endl;
    // cout << *sumit + 1 << endl;
    // cout << *(sumit + 1) << endl;
    // cout << sumit[3] << endl;
    // int s[10] = {
    //     1,
    //     2,
    //     3,
    //     4,
    //     5,
    //     4,
    //     5,
    //     6,
    // };
    // int arr[] = {
    //     2,
    //     3,
    //     5,
    //     6,
    //     7,
    //     8,
    //     9,
    // };
    // int *ptr = &arr[0];
    // cout << " address of the 1st element :" << ptr << endl;       // address of the 1st element
    // cout << " print the value of the index : " << ptr[3] << endl; // print value of that index

    // char ch[] = "abcde";

    // char *c = &ch[0];
    // cout << "print full array list " << c << endl;   // fulll array
    // cout << " print only 1st value" << c[0] << endl; // 0 index will be print

    // return 0;
    // ques -> sum of array
    // int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // int n = sizeof(arr) / sizeof(arr[0]);

    // int sum = 0;

    // for (int i = 0; i < n; i++)
    // {
    //     sum = sum + arr[i];
    // }
    // cout << sum << endl;
    // return 0;

    // ques - >>  produst of the element

    // int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // int n = sizeof(arr) / sizeof(arr[0]);

    // int prod = 1;

    // for (int i = 0; i < n; i++)
    // {
    //     prod = prod * arr[i];
    // }
    // cout << prod << endl;
    // return 0;
    // ques -->> element present or not

    // int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // int n = sizeof(arr) / sizeof(arr[0]);

    // int x;
    // cout << "enter target : ";
    // cin >> x;
    // bool flag = false;
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] == x)
    //     {
    //         flag = true;
    //         break;
    //     }
    // }
    // if (flag == true)
    //     cout << x << " is present :";
    // else
    //     cout << x << " is not present :";
    // maximum element find --->>>
    //     int arr[] = {2, 4, 6, 78, 45, 23};

    //     int n = sizeof(arr) / sizeof(arr[0]);

    //     int max = arr[0];

    //     for (int i = 1; i < n; i++)
    //     {
    //         if (max < arr[i])
    //         {
    //             max = arr[i];
    //         }
    //     }
    //     cout << "maximum number of this array is: " << max;

    // int arr[] = {2, 4, 6, 78, 45, 23};

    // int n = sizeof(arr) / sizeof(arr[0]);

    // int min = arr[0];

    // for (int i = 1; i < n; i++)
    // {
    //     if (min > arr[i])
    //     {
    //         min = arr[i];
    //     }
    // }
    // cout << "maximum number of this array is: " << min;

    // ques--> second largest element of this array
    int arr[] = {2, 4, 6, 78, 45, 23};

    int n = sizeof(arr) / sizeof(arr[0]);

    int max = arr[0];
    int secmax = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (secmax < arr[i] && arr[i] != max)
        {
            secmax = arr[i];
        }
    }
    cout << "1st largest element: " << max << endl
         << " second largest element: " << secmax;
}
