#include <iostream>
#include <string>
using namespace std;


class Teacher {
private:
     double salary;
public:
    //non-parameterized
    // Teacher() {
    //     dept = " science";
    // }
    //parameterized
    Teacher(string n, string d,string s, double sal) {
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    }


    string name;
    string dept;
    string subject;
   
    void changeDept(string newDept) {
        dept = newDept;
    }

    void getInfo() {
        cout << "name : " << name << endl;
        cout << "subject :" << subject << endl;
    }
};

int main() {
    
    Teacher t1("sumit kumar singh","computer sciense","c++", 35000);
    
    t1.getInfo();
   
    return 0;
}