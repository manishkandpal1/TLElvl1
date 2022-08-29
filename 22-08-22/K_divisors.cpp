#include <bits/stdc++.h>
using namespace std;

#define int     int64_t
#define endl    '\n'

void solve() {
   int a;
   cin>>a;

   for(int i=1;i<=a;i++)
   if(a%i == 0)
   cout<<i<<endl;

}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    solve();
}
