#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
   string name = "Timur";
    sort(name.begin(), name.end());

    int n;
    cin >> n;
    while(n--) {
        int m;
        cin >> m;
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        cout << (s == name ? "YES" : "NO") << endl;
}
return 0;   
}
