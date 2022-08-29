#include <bits/stdc++.h>
using namespace std;

#define int     int64_t
#define endl    '\n'

void solve() {
   int arr[3],xyz[3];
   cin>>arr[0]>>arr[1]>>arr[2];

    xyz[0] = arr[0];
    xyz[1] = arr[1];
    xyz[2] = arr[2];

    sort(arr, arr+3);

    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
    cout<<endl;
    cout<<xyz[0]<<endl;
    cout<<xyz[1]<<endl;
    cout<<xyz[2]<<endl;

}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    solve();
}
