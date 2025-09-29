#include <iostream>
#include <string>
using namespace std;


class Teacher {
private:
     double salary;
public:
    string name;
    string dept;
    string subject;
    //non-parameterized
    Teacher() {
        dept = " science";
    }
    //parameterized
    Teacher(string name, string dept,string subject, double salary) {
        
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }

    // copy constructor
    Teacher (Teacher &orgObj) {
        cout <<" i am custom copy constructor...." << endl;
        this->name = orgObj.name;
        this->dept = orgObj.dept;
        this->subject = orgObj.subject;
        this->salary = orgObj.salary;
    }
   
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
    // t1.getInfo();
    
    Teacher t2(t1); // custom copy constructor
    t2.getInfo();

    return 0;
}