#include <bits/stdc++.h>
#define endl "\n"
#define int long long
typedef long long ll;
int MOD = 1e9+7;
int mod = 1e9+7;
using namespace std;
 
void solve()
{
    int n;
    cin>>n;
	if(n%2==0 && n>=4){
		if(n%6==0) cout<<n/6;
		else cout<<n/6 +1;
		cout<<" ";
		cout<<n/4;
	}
	else cout<<-1;
	cout<<endl;
}
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
 
    int t;
    cin >> t;
    while (t--){
        solve();
}
}
