#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
     int n,m;
     cin>>n>>m;
     int a[n];
     for(int i=0;i<n;i++)
     {
          cin>>a[i];
     }
     sort(a,a+n);
     for(int x=-m;x<=m;x++)
     {
          int y=binary_search(a,a+n,x);
          if(y==0)
          {
               cout<<x<<endl;
               break;
          }
     }
}
