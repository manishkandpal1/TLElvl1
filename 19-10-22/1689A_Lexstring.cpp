#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
 
    int t; cin>>t;
    while (t--){
        int n,m,k; cin>>n>>m>>k;
        string a,b,c; cin>>a>>b;
        sort(a.begin(),a.end(),greater<char>());
        sort(b.begin(),b.end(),greater<char>());
 
        int ak=0,bk=0;
        while (!a.empty() && !b.empty())
        {
            bool g=b.back()<a.back();
            if (g && bk==k) g=0;
            if (!g && ak==k) g=1;
 
            if (g) c.push_back(b.back()),bk++,ak=0,b.pop_back();
            else c.push_back(a.back()),ak++,bk=0,a.pop_back();
        }
 
        cout<<c<<"\n";
    }
}
