#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
   string s;
   cin>>s;

   map<char,int>mp;
   for(int i=0;i<s.size();i++){
    mp[s[i]]++;
   }
   for(auto i:mp){
    cout<<i.first<<" "<<i.second<<"\n";
   }
  
}
