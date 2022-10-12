#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;

void solve() {
    long long n ;
    cin >> n;
    long long c= 0;
    while(n > 2){
        long long t = 5 ;
        long long nw= 2 ;
        while(n >= t+nw){
            nw = t+nw ;
            t += 3;
        }
        n -= nw ;
        c++;
    }
    if(n >= 2) c++ ;
    cout << c<< endl ;
   
}

signed main(){
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}
