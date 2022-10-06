#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;

signed main()
{
     ios::sync_with_stdio(false);
     cin.tie(NULL);

          ll n=0,m=0,maxip = LLONG_MIN, maxic = LLONG_MIN;
          cin >> n >> m;
          map <string, string> mp;
          map <string, ll> chef, country;
          string name= "", place= "", maxipname="",maxicname= "";
           for (ll i = 0; i < n; i++){
            cin >> name >> place;
            mp[name] = place;
        }

        for (ll i = 0; i < m; i++) {
            cin >> name;
            chef[name] += 1;
            country[mp[name]] += 1;
        }

        for (auto x : chef) {
            if (x.second > maxic) {
                maxic = x.second;
                maxicname = x.first;
            }
        }
         for (auto x : country){
            if (x.second > maxip)  {
                maxip = x.second;
                maxipname = x.first;
            }
        }
        cout << maxipname << '\n' << maxicname << '\n';
    return 0;
    }
