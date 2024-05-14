#include <iostream>
using namespace std;

class Human {
protected:
        string name;
public:
        Human (const string& name) : name(name) {}

        void displayHuman () {
                cout << "\nHi human\n" << name << "\n";
        }
};

class Programmer : public Human {
protected:
        string organisation;
public:
        Programmer (const string& name, const string& org) : Human(name), organisation(org) {}

        void displayProgrammer() {
                cout << "\nHi programmer\n";
                displayHuman();
                cout << "\nOrg: " << organisation << "\n";
        }
};

class CPer : public Programmer {
protected:
        int rating;
public:
        CPer (const string& name, const string& org, int rating) : Programmer(name, org), rating(rating) {}

        void displayCPer () {
                cout << "\nHi CPer\n";
                displayProgrammer();
                cout << "\nRating: " << rating << "\n";
        }
};

int main() {
        CPer Varun("Varun", "Google", 2003);
        Varun.displayCPer();
}
