#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int r1= arr[n-1]+arr[n-2];
        int r2=arr[0]+arr[1];
        cout<<r1-r2<<"\n";
    }
}
