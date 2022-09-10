#include <bits/stdc++.h>
using namespace std;

#define int int64_t
#define endl '\n'

void solve()
{
    int n, x;
    cin >> n;

    vector<int> math, pro, eu;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x == 1)
        {
            pro.push_back(i);
        }
        else if (x == 2)
        {
            math.push_back(i);
        }
        else if (x == 3)
        {
            eu.push_back(i);
        }
    }

    int ans = min(math.size(), min(pro.size(), eu.size()));
    cout<<ans<<endl;
    for(int i = 0 ; i < ans ; i ++)
    cout<<math[i]<< " "<< pro[i] << " "<< eu[i]<< endl ;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
}
