#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	for (int qq = 1; qq <= tt; qq++) {
		int n;
		long long k;
		cin >> n >> k;
		vector<int> v(n);
		for (auto &it : v) {
			cin >> it;
		}
		if (k > 1) {
			k = 2 + k % 2;
		}
		while (k--) {
			int mx = *max_element(v.begin(), v.end());
			for (int i = 0; i < n; i++) {
				v[i] = mx - v[i];
			}
		}
		for (auto x : v) {
			cout << x << " ";
		}
		cout << '\n';
	}
}
