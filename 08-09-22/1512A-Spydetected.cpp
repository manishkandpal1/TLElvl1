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
        int n,ans=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        bool found=false;
         for (int i = 1; i <n-1 ; ++i) {
            if (arr[i]!=arr[i-1] && arr[i]!=arr[i+1]){
                cout<<i+1<<"\n";
                found = true;
            }
        }
        if (!found){
            if (arr[0]!=arr[1]){
                cout<<1<<"\n";
            } else{
                cout<<n<<"\n";
            }
    }
}
}
