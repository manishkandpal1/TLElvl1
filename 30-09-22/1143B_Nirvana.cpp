#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define m 10e7;

void solve(){
    string s;
    cin>>s;
    if(s=="1"){
        cout<<"1\n";
        return ;
    }
    ll ans=1;
    for(int i=0;i<s.length();i++) { ans *= (s[i]-'0') ; }   // Original number 
    ll now=1;
    for(int i=0;i<s.length();i++){
        if(s[i]>'0'){
            ll res;
            if(s[i]=='1'&&i==0) { res = pow(9ll,s.length()-1) ; } //
            else { res = now*(s[i]-'1')*pow(9ll,s.length()-i-1) ; } 
            ans = max(ans,res);
        }
        else{
        	break ; 
        }
        now*=s[i]-'0';
    }
    cout<<ans<<"\n";
}

signed main (){
	ios::sync_with_stdio(false); cin.tie(NULL);
    solve();
}
