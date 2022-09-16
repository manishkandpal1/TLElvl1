#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,t,i,fv,sum;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long a[n+3]= {0};
        cin>>fv;
        sum=0;
        for(i=1; i<n; i++)
        {
            cin>>a[i];
            if(fv*a[i]>0)
            {
                if(a[i]>fv)
                    fv=a[i];
            }
            else
            {
                sum+=fv;
                fv=a[i];
            }
        }
         sum+=fv;
        cout<<sum<<endl;
    }
}
