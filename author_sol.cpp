#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		// find the GCD of all the elements
		int g = a[0];
		for (int i = 1; i < n; i++) {
			g = __gcd(a[i], g);
		}
		// find the smallest prime factor of the GCD
		auto GetFactor = [&](int x) {
			for (int i = 2; i <= sqrt(x); i++) {
				if (x % i == 0) {
					return i;
				}
			}
			return x;
		};
		cout << (GetFactor(g) > 1 ? GetFactor(g) : -1)  << '\n';
	}
	return 0;
}
