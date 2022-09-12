#include <bits/stdc++.h>
using namespace std;
#define ll long long 
 
signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    ll sum=0;
    for(ll i=0;i<n;i++){
        if(a[i]>a[i+1]){
            sum+=abs(a[i]-a[i+1]);
            a[i+1]=a[i];
        }
    }
    cout<<sum;
  
}
