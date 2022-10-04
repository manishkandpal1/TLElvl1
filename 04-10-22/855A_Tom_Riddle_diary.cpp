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
    set<string>s;
    while(n--){
     string t;
     cin>>t;
     auto it=s.find(t);
     if(it==s.end()){
          cout<<"NO\n";
          s.emplace_hint(s.begin(),t);
     }else{
          cout<<"YES\n";
     }
    }
}
