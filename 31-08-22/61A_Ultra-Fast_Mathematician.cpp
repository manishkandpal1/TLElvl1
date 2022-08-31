#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    string x1,x2;
    cin>>x1>>x2;
    for(int i=0;i<x1.length();i++){
        if(x1[i]==x2[i]){
            x1[i]='0';
        }else{
            x1[i]='1';
        }
    }
    cout<<x1<<endl;
  
}
