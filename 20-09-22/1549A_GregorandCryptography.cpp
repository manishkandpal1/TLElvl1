#include <bits/stdc++.h>
using namespace std;


void solve(){
     int p;
        cin >> p;
        if (p % 2 == 1)
        {
            cout << "2 " << p - 1 << endl;
        }
        else
        {
            cout << "2 " << p << endl;
        }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
