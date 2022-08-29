#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    int a[6][6],r,c,i,j;
    for(r=1;r<=5;++r){
        for(c=1;c<=5;++c){
            cin>>a[r][c];
            if(a[r][c]==1){
                i=abs(r-3);
                j=abs(c-3);
                cout<<i+j;
    }
        }
    } 
    

}
