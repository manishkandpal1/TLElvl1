#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    int n;
    cin>>n;
    while(n!=0)  {
        if(n%1000==144){
            n/=1000;
        }
        else if(n%100==14) {
            n/=100;
        }
        else if(n%10==1) {
            n/=10;
        }
        else {
            cout<<"NO"<<endl;
            return 0;
        }
    }
        cout<<"YES"<<endl;
    return 0;

}
