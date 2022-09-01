#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    long long t,i;
    cin>>t;
    while(t--){
        long long n;
        string s;
        cin>>n>>s;
        vector<char>v;
        v.push_back(s[0]);
        for(i=1;i<n;i++){
            if(s[i]!=s[i-1]){
                v.push_back(s[i]);
            }
        }
        set<char>ss;
        ss.insert(v[0]);
        for(i=1;i<v.size();i++){
            if(ss.find(v[i])!=ss.end()){
                cout<<"NO"<<endl;
                goto h;
            }
            ss.insert(v[i]);
        }
        cout<<"YES"<<endl;
        h:;
    }
}
        
