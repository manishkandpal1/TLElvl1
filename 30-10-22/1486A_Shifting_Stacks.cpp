#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long
void solve(){
	ll n;
	cin>>n;
	ll c=0;
	bool flag=false;
	for(ll i=0;i<n;i++){
		ll x;
		cin>>x;
		c+=x;
		if(i*(i+1)/2>c){
			flag=true;
		}
	}
	cout<<(flag? "NO":"YES")<<endl;

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
