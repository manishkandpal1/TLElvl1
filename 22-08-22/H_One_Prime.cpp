#include <bits/stdc++.h>
using namespace std;

#define int int64_t
#define endl '\n'

bool isPrime(int n)
{
    if (n <= 1)
        return false;
 
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
 
    return true;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a;
    cin>>a;

    isPrime(a) ? cout << " YES\n" : cout << " NO\n";
}
