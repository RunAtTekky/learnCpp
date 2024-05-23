#include <iostream>
using namespace std;

class Operation {
private:
        int a, b, add, mul;
        float div;
public:
        void get();
        int sum();
        int product();
        float division();
};

inline void Operation::get() {
        cout << "Enter a: \n";
        cin >> a;
        cout << "Enter b: \n";
        cin >> b;
}

inline int Operation::sum() {
        return a+b;
}

inline int Operation::product() {
        return a*b;
}

inline float Operation::division() {
        return (float)a/b;
}


int main() {
        Operation o;

        o.get();
        o.sum();
        o.product();
        o.division();
}
