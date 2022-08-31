#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
  string s;
    cin>>s;
    bool x= false;

    int c= 1;
    for (int i = 1; i < s.length(); ++i) {
        if (s[i] == s[i - 1]) {
            c+= 1;
            if (c == 7){
                x=true;
                break;
            }
        }
        else {
            c=1;
        }
    }
    if(x){
      cout<<"YES";
    }else{
      cout<<"NO";
    }
}
