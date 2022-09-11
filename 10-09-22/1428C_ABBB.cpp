#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    stack<char>a;
    for(int i=0;i<s.size();i++){
        if(a.size()==0){
            a.push(s[i]);
            continue;
        }
        if(s[i]=='B'&& (a.top()=='A'||a.top()=='B')){
            a.pop();
        }else{
            a.push(s[i]);
        }
    }
    cout<<(int)a.size()<<"\n";
}
signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    int c;
    cin>>c;
    while(c--){
        solve();
    }
  return 0;
}
