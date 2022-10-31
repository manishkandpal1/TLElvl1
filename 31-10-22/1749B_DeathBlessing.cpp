#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long

void solve(){
	ll n;
	cin>>n;
	ll a[n],b[n];
	for(ll i=0;i<n;i++){
		cin>>a[i];
	}
	for(ll i=0;i<n;i++){
		cin>>b[i];
	}
	ll suma=0,sumb=0,maxb=0;
	for(int i=0;i<n;i++){
		suma+=a[i];
		sumb+=b[i];
		maxb=max(maxb,b[i]);
	}
	ll ans= suma+sumb -maxb;
	cout<<ans<<endl;

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
