#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main()
{
     ios::sync_with_stdio(false);
     cin.tie(NULL);
     int n,m;
     cin>>n>>m;
     int a[n];
     for(int i=0;i<n;i++)
     cin>>a[i];
    vector<int>v(n);
    int e=n-1;
    unordered_map<int,int>mp;
    for(int i=e;i>=0;i--)
    {
         mp[a[i]]++;
         v[e--]=(int)(mp.size());
    }
    for(int i=0;i<m;i++)
    {
         int x;
         cin>>x;
         cout<<v[x-1]<<endl;
    }
    
}
