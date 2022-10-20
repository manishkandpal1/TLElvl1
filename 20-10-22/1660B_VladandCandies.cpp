#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for(auto &i:v){
            cin>>i;
        }
        sort(v.begin(),v.end());
        if(n==1){
            if(v[0]==1){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }else{
            if(v[n-1]-v[n-2]<=1){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }
    }
    return 0;
}
