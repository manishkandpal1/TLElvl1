 #include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
   int t, n;
    cin >> t;
    while (t--) {
        int ans = 0;
        cin >> n;
        while (n != 1) {
            if (n % 3 != 0) {
                cout << -1 << '\n';
                break;
            }
            if (n % 6 == 0) n /= 6;
            else n *= 2;
            ans++;
        }
        if(n == 1) cout << ans << '\n';
    }
    return 0;
  }
  
