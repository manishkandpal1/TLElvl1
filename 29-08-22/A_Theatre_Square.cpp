#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    int n,m,a;
    cin>>n>>m>>a;
    int r1,r2;
    if(n%a==0){
        r1=n/a;
    }else{
        r1=(n/a)+1;
    }

    if(m%a==0){
        r2=m/a;
    }else{
         r2=(m/a)+1;
    }

    cout<<r1*r2; 

}
