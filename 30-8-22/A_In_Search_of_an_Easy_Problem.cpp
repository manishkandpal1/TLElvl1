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
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bool ans=false;
    for(int i=0;i<n;i++){
        if(a[i]==1){
            ans=true;
        }
    }
    if(ans){
        cout<<"HARD";
    }else{
        cout<<"EASY";
    }
}
