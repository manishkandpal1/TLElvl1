#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

signed main()
{
     ios::sync_with_stdio(false);
     cin.tie(NULL);
     int n,k;
     cin>>n>>k; 
     int num[26]={0}; 
     string s; 
     cin>>s;
     string t=s; 
     sort(s.begin(),s.end()); 
     for(int i=0;i<k;i++){   
          num[s[i]-'a']++;  
     }     
     for(int i=0;i<t.size();i++){ 
          if(num[t[i]-'a']){ 
               num[t[i]-'a']--; 
          }else{
               cout<<t[i];  
          }
     }
     return 0; 
    
}
