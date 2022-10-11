#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int int64_t
typedef long long ll;

int a[(int)1e6+10];
set<int> mp; 

void tprime(){
    mp.insert(4);  
    for(int i=3;i<(int)1e6+1;i+=2){ 
        if(a[i]==0){
            mp.insert(i*i);  
            for(int j=i;j<(int)1e6;j+=i){  
                a[j]=1;
            }
        }
        
    }
}

signed main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin>>t;
    tprime();
    int x;
    for(int i=0;i<t;i++){
        cin>>x;
        if(mp.find(x)!=mp.end()){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
   }
