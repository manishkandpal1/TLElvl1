//https://codeforces.com/problemset/problem/32/B
#include <bits/stdc++.h>
using namespace std;
#define ll long long 

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    string s,s2;
    cin>>s;
    int len=s.length();
    for(int i=0;i<len;i++){
	if(s[i]=='.'){
		s2+='0';
        }
	if(s[i]=='-'&&s[i+1]=='.'){
		s2+='1';
		++i;
        }
	if(s[i]=='-'&&s[i+1]=='-'){
		s2+='2';
		++i;
        }
    } 
 cout<<s2;
 return 0;
}
