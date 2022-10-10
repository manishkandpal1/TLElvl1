#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;

signed main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);
    int q;
    cin>>q;
    priority_queue<int, vector<int>, greater<int> >st;
    int x;
    while(q--){
        string s;
        cin>>s;
        if(s=="push"){
            cin>>x;
            st.push(x);
        }else if(s=="pop"){
            st.pop();
        }else if(s=="top"){
            cout<<st.top()<<"\n";
        }
    }
}
