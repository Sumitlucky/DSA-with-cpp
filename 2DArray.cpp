#include<iostream>
using namespace std;
int main() {
    int matrix[4][3];
    int rows = 4;
    int cols = 3;

    //input
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            cin >> matrix[i][j];
        }
    }


    //output
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            cout <<  matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
} 