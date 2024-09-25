#include <bits/stdc++.h>
using namespace std;

inline int square(int x) {return x*x;}

int main() {
        int x = 8;
        cout << "Square of " << x << " is: " << square(x) << "\n";

        function<bool(int)> isTwo = [](int x) {
                return x==2;
        };

        function<bool(int)> isPowerOfTwo = [](int x) {
                return ((x)&(x-1)) == 0;
        };

        cout << isTwo(2) << "\n";
        cout << isTwo(3) << "\n";

        cout << isPowerOfTwo(8) << "\n";
        cout << isPowerOfTwo(10) << "\n";
}
