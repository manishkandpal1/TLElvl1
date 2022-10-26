#include <bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin>>n;
	int a[n];
	for (int i=0; i<n; i++){
		cin>>a[i];
	}
	sort(a,a+n);
	int ans=2e9;
	for (int i=2; i<n; i++){
		ans=min(ans,a[i]-a[i-2]);
	}
	cout<<ans<<'\n';
}
int main(){
	int t;
	cin>>t;
	for (int i=1; i<=t; i++){
		solve();
	}
}
