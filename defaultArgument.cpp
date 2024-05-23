#include <iostream>
using namespace std;

#define p(a) cout << a << "\n"
#define p2(a,b) cout << a << " " << b << "\n"

class Human {
private:
        int age;
public:
        Human(int x=20): age(x) {};

        int addMarks (int a, int b, int c=95, int d=99) {
                return a + b + c + d;
        }
        void setAge(int x) {
                age = x;
        }

        int getAge() {
                return age;
        }
};

int main() {

        Human Prashray(15);

        p2("Age of human is:", Prashray.getAge());

        Prashray.setAge(21);

        p2("Now age of human is:", Prashray.getAge());

        int marksSum = Prashray.addMarks(70, 80, 90);

        p2("Marks of Prashray are:", marksSum);
}
