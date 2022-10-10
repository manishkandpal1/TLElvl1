#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;

signed main()
{
    int q;
    cin>>q;
    deque<int>st;
    int x;
    while(q--){
        string s;
        cin>>s;
        if(s=="push_back"){
            cin>>x;
            st.push_back(x);
        }else if(s=="push_front"){
            cin>>x;
           st.push_front(x);
        }
        else if(s=="front"){
           cout<<st.front()<<endl;
        } else if(s=="back"){
           cout<<st.back()<<endl;
        } else if(s=="pop_front"){
            st.pop_front();
        }else if(s=="pop_back"){
            st.pop_back();
        }else if(s=="print"){
            cin>>x;
            cout<<st[x-1]<<endl;
        }
    }
}
