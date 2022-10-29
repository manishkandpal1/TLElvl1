#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long
void solve(){
	ll n;
	cin>>n;
	ll ans=15;
	ans=max(ans,(long long)(n+1)/2 *5);
	cout<<ans<<"\n";

}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
