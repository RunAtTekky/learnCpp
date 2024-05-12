#include <iostream>
#include <vector>
using namespace std;

vector<int> dp;

int fibb(int n) {
	if (n<=1) return n;
	if (dp[n] != -1) return dp[n];
	dp[n] = fibb(n-2) + fibb(n-1);
	return dp[n];
}

int main() {
	int n; cin >> n;
	dp = vector<int>(n,-1);
	dp[0] = 0;
	dp[1] = 1;
	int x = fibb(n-1);

	for (auto num : dp) cout << num << " ";

	cout << "\nThe n'th fibonacci number is: " << dp[n-1] << "\n";
}
