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
    int x1=0,x2=1,next=0;
    if(n==1){
            cout<<x1;
            return 0;
        }
        if(n==2){
            cout<<x2;
            return 0;
        }
    for(int i=3;i<=n;i++){
        next=x1+x2;
        x1=x2;
        x2=next;
    }
    cout<<next;
  return 0;
}   
