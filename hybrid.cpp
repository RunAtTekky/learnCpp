#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
        string name;
public:
        Person (const string& name) : name(name) {}
        
        void display() {
                cout << "\nName: " << name << "\n";
        }
};

class Employee: public Person {
protected:
        int id;
public:
        Employee (const string& name, int id) : Person(name), id(id) {}

        void displayEmployee() {
                cout << "\nInside Employee class";
                cout << "\nName: " << name << "\nID: " << id << "\n";
        }

};

class Student: public Person {
protected:
        int studentID;
public:
        Student (const string& name, int id) : Person(name), studentID(id) {}

        void displayStudent() {
                cout << "\nInside Student class";
                cout << "\nName: " << name << "\nstudentID: " << studentID << "\n";
        }
};

class Intern: public Employee, public Student {
public:
        Intern (const string& name, int employeeId, int studentID) : Student(name, studentID), Employee(name, employeeId) {}

        void displayIntern() {
                cout << "\nInside Intern class\n";
                displayStudent();
                displayEmployee();
        }
};

int main() {
        Intern varun("Varun", 296, 512);
        varun.displayIntern();
}

