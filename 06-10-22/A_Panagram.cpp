#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

signed main()
{
     ios::sync_with_stdio(false);
     cin.tie(NULL);

     int n;
     cin>>n;
     int num[26]={0};
     bool flag=true;
     string s;
     cin>>s;
     for(int i=0;i<n;i++){   
          if(s[i]>='a' && s[i]<='z'){
          num[s[i]-'a']++;  
          }  
          if(s[i]>='A' && s[i]<='Z'){
          num[s[i]-'A']++;  
          } 
     }  
     for(int i=0;i<26;i++){ 
          if(num[i]==0){ 
               flag=false;
               cout<<"NO\n";
               break;    
          }
     }
     if(flag){
          cout<<"YES\n";
     }

    return 0;
}
