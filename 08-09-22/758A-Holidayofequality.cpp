#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
int count(int arr[],int n){
    int sum=0;
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        int diff=arr[n-1]-arr[i];
        sum+=diff;
    }
    return sum;
}
signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<count(arr,n);
    return 0;
}
