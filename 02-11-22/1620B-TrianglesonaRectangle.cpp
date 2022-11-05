#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
#define ll long long

void solve(){
	ll w,h,d,x;
	cin>>w>>h;
	ll n;
	ll mx=LONG_LONG_MIN;
	for(ll i=0;i<4;i++){
		cin>>n;
		for(ll j=0;j<n;j++){
		 cin>>x;
		if(j==0){
			d=x;
		}else if(j==n-1){
			d=x-d;
		}
		}
		if(i<2){
			d*=h;
		}else{
			d*=w;
		}
		mx=max(mx,d);
	}
	cout<<mx<<"\n";
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
