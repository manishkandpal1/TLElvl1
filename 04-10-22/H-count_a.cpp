#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
     string s;
     getline(cin,s);
     int t;
     cin>>t;
     vector<int>v;
     for(int i=0;i<s.length();i++)
     {
          if(s[i]=='a')
          v.push_back(i);
     }
     while(t--){
          int l,r;
          cin>>l>>r;
          l=l-1;
          r=r-1;
          int count=0;
          for(auto z:v)
          {
               if(z>=l && z<=r)
               count++;
          }
          cout<<count<<endl;
     }
}
