#include<iostream>
#include<string>
using namespace std;

class Student {
public:
    string name;
    double* cgpaPtr;
    
    Student(string name, double cgpa) {
        this-> name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    //Destructor
    ~Student() {
        cout << "hi , i delete everything" << endl;
        delete cgpaPtr;
    }
   


    void getInfo() {
        cout << " Name :" << name << endl;
        cout << "cgpa :" << *cgpaPtr << endl;
    }

}; 

int main() {
    Student s1("sumit kumar singh", 9.4);
    s1.getInfo();
    return 0; 
}