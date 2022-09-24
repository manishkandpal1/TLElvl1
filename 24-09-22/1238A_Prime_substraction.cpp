#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll m,n,i,j;
    cin>>i;
    while(i--)
    {
        cin>>m>>n;

    if(m%2==0 and n%2==0)cout<<"YES\n";
    else if ((m%2==1 and n%2==0 ) ||( m%2==0 and n%2==1))
    {
        if( m-n >=2)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else cout<<"YES"<<endl;
    }
}
