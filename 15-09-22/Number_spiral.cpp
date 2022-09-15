 #include <bits/stdc++.h>
using namespace std;

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
   int t;
   cin>>t;
   while(t--){
    long long int y,x,ans;
    cin>>y>>x;
    if(y<x){
        if(x%2!=0){
             ans=(x*x)-y+1;
        }else{
            ans=((x-1)*(x-1))+y;
        }
        cout<<ans<<"\n";
    }
    else{
        if(y%2!=0)
        ans=((y-1)*(y-1))+x;
        else
        ans=(y*y)-x+1;
        cout<<ans<<"\n";
    }
   }
   return 0;
  }
  
