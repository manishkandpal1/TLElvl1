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
        long long n,i;
        cin>>n;
        if((n/2)%2!=0){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
            long long j=2;
            for(i=1;i<=n/2;i++){
                cout<<j<<" ";
                j+=2;
            }
            long long val=j-2;

            j=1;
            for(i=1;i<n/2;i++){
                cout<<j<<" ";
                j+=2;
            }
            cout<<val+n/2-1<<"\n";
        }
    }
}
        
