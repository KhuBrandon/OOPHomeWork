#include<iostream>
using namespace std;

class Person {
public:
    Person(int x) {
        pNum = 12;
        cout << "Person::Person(int) called" << endl;
    }
    Person() {
        pNum = 12;
        cout << "Person::Person() called" << endl;
    }
    int pNum;
};

class Faculty : virtual public Person {
public:
    Faculty(int x) : Person(x) {
        fNum = 4;
        cout << "Faculty::Faculty(int) called" << endl;
    }
    int fNum;
};

class Student : virtual public Person {
public:
    Student(int x) : Person(x) {
        sNum = 8;
        cout << "Student::Student(int) called" << endl;
    }
    int sNum;
};

class TA : public Faculty, public Student {
public:
    TA(int x) :  Student(x), Faculty(x) {
        cout << "TA::TA(int) called" << endl;
        cout << "Number of People: " << pNum << endl;
        cout << "Number of Faculty: " << fNum << endl;
        cout << "Number of Student: " << sNum << endl;
    }
};

int main() {
    TA ta1(30);
    return 0;
}
