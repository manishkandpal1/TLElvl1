#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;
    while (tc--) {
        int n, x;
        cin >> n >> x;

        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int mini = a[0], maxi = a[0];
        int ans = 0;

        for (int i = 1; i < n; i++) {
            mini = min(mini, a[i]);
            maxi = max(maxi, a[i]);

            if (maxi - mini > 2*x) {
                ans++;
                mini = maxi = a[i];
            }
        }

        cout << ans << endl;
    }
}
