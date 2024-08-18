#include <bits/stdc++.h>
using namespace std;

int main() {
        int w;
        cin >> w;

        vector<int> vec(w);
        iota(vec.begin(), vec.end(), 1);

        for (auto e : vec) cout << e << " ";
        cout << "\n";

        if (w <= 2) {
                cout << "NO\n";
        }
        else if (w%2 != 0) {
                cout << "NO\n";
        }
        else {
                cout << "YES\n";
        }
}
