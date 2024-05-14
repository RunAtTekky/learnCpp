#include <iostream>
using namespace std;

class Animal {
public:
        Animal() {
                cout << "Animal\n";
        }
};


class Mammal {
public:
        Mammal() {
                cout << "Mammal\n";
        }
};

class Human: public Mammal, public Animal {
public:
        Human() {
                cout << "Human\n";
        }
};



int main() {
        Human varun;
}
