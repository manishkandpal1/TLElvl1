#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int a[4];
        int b[2];
        cin >> a[0] >> a[1] >> a[2] >> a[3];
        b[0] = max(a[0], a[1]);
        b[1] = max(a[2], a[3]);
        sort(a, a + 4);
        sort(b, b + 2);
        if (a[3] == b[1] && a[2] == b[0])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
