#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
int check(int arr[],int n){
    int co=0,ce=0;
    if(n%2!=0){
            return -1;
     }else{
        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                ce++;
            }else{
                co++;
            }
        }
        if(co==ce){
           return 0;
        }else{
            return (abs(co-ce)/2);
        }
    }
    cout<<endl;
}
signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int ans=check(arr,n);
        cout<<ans<<endl;
    }
  return 0;
}   
