#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;

signed main()
{
     ios::sync_with_stdio(false);
     cin.tie(NULL);

     int t;
     cin>>t;
     while(t--){
           ll n,k;
           cin>>n>>k; 
           multiset<ll>s;
           ll x,c=0;
           for(int i=0;i<n;i++){
               cin>>x;
               s.insert(x); 
           }
                while(k>0 && s.size()>0){
                     auto it=(--s.end()); 
                     k=k-*it; 
                     if(*it/2>0) 
                     s.insert(*it/2); 
                     s.erase(it);
                     c++; 

                }
                if(k<=0) 
                     cout<<c<<endl;
                else
                    cout<<"Evacuate\n";
     }
    return 0;
}
