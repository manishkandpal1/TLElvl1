#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    ll n , k ;
    cin >> n >> k ;
    
    ll even = n / 2 ;
    ll odd = n - even ;
    
    if(k <= odd){
        cout << (k * 2) - 1 << '\n';
    }
    else{
        k -= odd ;
        cout << (k * 2) << '\n' ;
    }
    return 0 ;
}
