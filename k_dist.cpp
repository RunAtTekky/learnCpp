#include <bits/stdc++.h>
using namespace std;

void solve () {
        int x,y,k;
        cin >> x >> y >> k;

        int x_co = 1e5;
        int y_co = 1e5;

        vector<pair<int,int>> coordinates;

        for (int i=0; i<(k&1) ? k-1 : k-2; i++) {
                pair<int,int> co;
                co.first = x_co;
                co.second = y_co;
                coordinates.push_back(co);

                x_co++; y_co++;
        }

        if (k%2==0 && x==0 && y==0) {
                coordinates.push_back({x_co*k, y_co*k});
                coordinates.push_back({-1*x_co*k, -1*y_co*k});
        }
        else {
                coordinates.push_back({x*k,y*k});

                if (k%2 == 0) {
                        coordinates.push_back({0,0});
                }
        }


        cout << "\n";
        for (auto [x_c, y_c] : coordinates) {
                cout << x_c << " " << y_c << "\n";
        }

        cout << "\n";
}

int main() {
        int t=1;
        cin >> t;
        while (t--) solve();
}
