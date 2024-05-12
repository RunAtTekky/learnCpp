#include <iostream>
using namespace std;

void count(int n) {
        if (n==0) return;
        count(n-1);
        cout << n << "\n";
}

int main() {
        cout << "Enter n: ";
        int n; cin >> n;
        cout << "\n";
        count(n);
}
