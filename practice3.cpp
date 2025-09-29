#include<iostream>
using namespace std;
int main() {
    int rupees;
    cout<< "Enter the rupees value :" << endl;
    cin >> rupees;
    int hundred = 100;
    int fifty = 50;
    switch(100){
        case 100 : cout << "100 notes is :" << (rupees/100) << endl;

        switch (50) {
            case 50 : cout << " 50 notes is :" << ((rupees-1400)/50) << endl;
            
                switch(20) {
                    case 20 : cout << "20 notes is :" << ((rupees-1400-50)/20) << endl;
                    break;
                }
            }
        }    

}   

 