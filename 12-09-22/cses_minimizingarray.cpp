#include <bits/stdc++.h>
using namespace std;
#define ll long long 
 
signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n-1;i++){
        cin>>a[i];
    }
   int  sum=n*(n+1)/2;
   int  sum1=0;
    for(int i=0;i<n-1;i++){
        sum1+=a[i];
    }
    cout<<sum-sum1;
  
}
