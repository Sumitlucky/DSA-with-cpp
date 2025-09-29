#include<iostream>
#include<string>
using namespace std;

class Person {
public:
    string name;
    int age;
    int rollno;

    // Person(string naem, int age) {
    //     this-> name = naem;
    //     this-> age = age;
    // }

    Person() {
        cout << "parent constructor" << endl;
    }
     
};

class Student : public Person {
public:
    int  rollno;

    Student() {
        cout << "child constructor" << endl;
    }

    void getInfo () {
        cout << "naem : " << name << endl;
        cout << "age : " << age << endl;
        cout << "rollno :" << rollno << endl;
    }
};



int main() {
    Student s1;
    s1.name ="sumit kumar singh";
    s1.age = 25;
    s1.rollno = 123;

    s1.getInfo();

    return 0;
}