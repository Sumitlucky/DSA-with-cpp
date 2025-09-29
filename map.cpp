#include<iostream>
#include<map>
using namespace std;
int main() {
    map<string,int> m;

    m["tv"] = 100;
    m["laptop"] = 100;
    m["headphone"] = 50;
    m["tablet"] = 120;
    m["watch" ] = 50;
    
    m.insert({"camera",25});
    m.erase("tv");
    for(auto p: m) {
        cout << p.first << " " << p.second << endl;
    }
    cout << "count = " << m["laptop"] << endl;
    
    if(m.find("tv") != m.end()) {
        cout << "found";
    }else {
        cout << " not found";
    }
    
    
    
    
    
    
    return 0;

} 