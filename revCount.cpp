#include <iostream>
using namespace std;

void revCnt(int n) {
	if (n == 0) return;
	cout << n << "\n";
	revCnt(n-1);
}

int main() {
	cout << "Enter n: \n";
	int n; cin >> n;
	cout << "\nCounting\n";
	revCnt(n);
}
