#include <iostream>
#include <limits>
using namespace std;

#define print(a,b) cout << a << " " << b << "\n"

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
        try {
                if (b == 0) throw "Dividing by Zero";
                return (float)a/b;
        }
        catch (...) {
                cout << "b is 0, thus cannot divide" << "\n";
        }
        return numeric_limits<float>::infinity();
}


int main() {
        Operation o;

        o.get();

        int sum = o.sum();
        print("Sum:",sum);

        int prod = o.product();
        print("Product:",prod);

        float div = o.division();
        print("Division:",div);

}
