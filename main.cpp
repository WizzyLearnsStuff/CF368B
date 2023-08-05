#include<unordered_set>
#include<iostream>
#include<vector>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	vector<int> v(n);

	for (int &e : v) {
		cin >> e;
	}

	vector<int> dp(n + 1);
	unordered_set<int> s;
	for (int i = n - 1; i >= 0; i--) {
		s.insert(v[i]);
		dp[i + 1] = s.size();
	}

	for (int i = 0; i < m; i++) {
		int b;
		cin >> b;
		cout << dp[b] << '\n';
	}
	
}
