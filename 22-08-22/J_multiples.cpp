#include <bits/stdc++.h>
using namespace std;

#define int     int64_t
#define endl    '\n'

void solve() {
    int a,b;
    cin>>a>>b;

    if(a%b == 0 || b%a == 0)
    cout<<"Multiples"<<endl;
    else
    cout<<"No Multiples"<<endl;

}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    // int testCase{}; cin >> testCase;
    // while (testCase--) solve();

    solve();
}
