#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;

signed main()
{
     ll t;
     cin>>t;
      map<string,int>mp;
       string s;
     while(t--){
       cin>>s;
       if(mp.count(s)==0){
        cout<<"OK\n";
        mp[s]=1;
       }else{
        cout<<s<<mp[s]<<"\n";
        mp[s]+=1;
       }
     }
    return 0;
    }
