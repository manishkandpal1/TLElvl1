#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
        int n,i,flag=0;
        cin>>n;
      int a[n];
      for(i=0;i<n;i++){
          cin>>a[i];
          }
        sort(a,a+n);

        for(i=1;i<n;i++){
            if(a[i]>a[i-1]) {
                cout<<a[i];
                flag=1;
                break;
            }
        }

        if(flag==0){
          cout<<"NO";
        }

        return 0;
}
