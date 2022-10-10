#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;

signed main()
{
    int q;
    cin>>q;
    queue<int>st;
    int x;
    while(q--){
        string s;
        cin>>s;
        if(s=="push"){
            cin>>x;
            st.push(x);
        }
        else if(s=="front"){
           cout<<st.front()<<endl;
        } else if(s=="back"){
           cout<<st.back()<<endl;
        } else if(s=="pop"){
            st.pop();
        }
    }
}
