#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void solve()
{
    string s; cin>>s;
    int ab=0,ba=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='a' && s[i+1]=='b')ab++;
        if(s[i]=='b' && s[i+1]=='a')ba++;
    }
    if(ab == ba)
        cout<<s<<"\n";
    else if(ab > ba)
    {
        s[0]='b'; cout<<s<<"\n";
    }
 
    else
    {
        s[0]='a'; cout<<s<<"\n";
    }
 
 
}
int main()
{
    int t;  cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
 
