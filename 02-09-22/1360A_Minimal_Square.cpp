#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t;
	cin >> t;
	int a, b;
	int x, y;
	while (t--)
	{
		cin >> a >> b;
		x = max(a, b);
		y = min(a, b);
		if (y * 2 > x)
			cout << 4 * y * y << endl;
		else
			cout << x * x << endl;
	}
}
