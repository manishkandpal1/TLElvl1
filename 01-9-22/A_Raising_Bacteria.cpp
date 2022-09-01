#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    int n,ans=0;
    cin>>n;
    while(n){
        if(n&1){
            ans++;
        }
        n>>=1;
    }
     cout<<ans<<endl;
    }


