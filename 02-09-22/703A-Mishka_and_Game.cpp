#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin>>t;
    int cm=0,cc=0;
    while(t--){
    int m,c;
    cin>>m>>c;
    if(m>c){
        cm++;
    }else if(m==c){
        cm++;
        cc++;
    }else{
        cc++;
    }
    }
    
    if(cm>cc){
        cout<<"Mishka";
    }else if(cm==cc){
        cout<<"Friendship is magic!^^";
    }else{
        cout<<"Chris";
    }
}
