#include <iostream>
using namespace std;
int main() {
    //power(a,b)
    int a, b;
    cin >> a >> b;

    int ans = 1;

    for(int i = 1; i<=b; i++) {
        ans = ans * a;
    }
    cout<< "answer is : " << ans << endl;

    int c, d;
    cin >> c >> d;

    ans = 1;

    for(int i = 1; i<=d; i++) {
        ans = ans * c;
    }
    cout<< "answer is : " << ans << endl;

    return 0;
}