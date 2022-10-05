#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main()
{
     string str;
     getline(cin,str);
     stack<int>s;
     int count=0;
     for(int i=0;i<str.length();i++)
     {
          if(str[i]=='(')
          s.push(str[i]);
          else
          {   
                    if(!s.empty()){
                         count++;
                    s.pop();}
                    else
                    continue;
          }
          
     }
     cout<<2*count<<endl;
}


