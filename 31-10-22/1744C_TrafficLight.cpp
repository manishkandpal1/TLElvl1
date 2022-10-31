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
        int n; char c;
        cin >> n >> c;

        string s; cin >> s;
        s += s;

        int last = -1, maxi = -INF;
        for (int i = s.size()-1; i >= 0; i--) {
            if (s[i] == 'g')
                last = i;

            if (s[i] == c && last != -1)
                maxi = max(maxi, last - i);
        }

        cout << maxi << endl;
    }
}
