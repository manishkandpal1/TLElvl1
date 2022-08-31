#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    int year,a,b,c,d;
    cin>>year;
    while(1){
         year++;
         a=year/1000;
         b=year/100%10;
         c=year/10%10;
         d=year%10;  
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d) {
             break;
         }
     }
     cout<<year<<endl;
    }


