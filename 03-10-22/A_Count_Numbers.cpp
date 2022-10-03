#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    int arr[100000]={0},x,y;
    int n,q;
    cin>>n>>q;
    for(int i=0;i<q;i++){
        cin>>x>>y;
        if(x==1){
            arr[y]=++arr[y];
        }else{
            cout<<arr[y]<<endl;
        }
    }
  
}
