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
    int n;
    cin>>n;
    for(int k=2;k<1e8;k++){
        int p=pow(2,k);
        p=p-1;
        if(n%p==0){
            cout<<n/p<<endl;
            break;
        }
    }
}
}
