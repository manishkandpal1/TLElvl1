#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;

signed main()
{
     ll t;
     cin>>t;
     while(t--){
        ll n,m,k;
        cin>>n>>m>>k;
        map<pair<int,int>,int>mp;
        for(int i=0;i<k;i++){
            ll a,b;
            cin>>a>>b;
            mp[{a,b}]++;
        }
        int count=k*4;
        for(auto i:mp){
            if(mp.find({i.first.first-1,i.first.second})!=mp.end()) count--;
            if(mp.find({i.first.first,i.first.second-1})!=mp.end()) count--;
            if(mp.find({i.first.first+1,i.first.second})!=mp.end()) count--;
            if(mp.find({i.first.first,i.first.second+1})!=mp.end()) count--;
        }
        cout<<count<<endl;
     }
    return 0;
    }
