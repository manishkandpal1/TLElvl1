#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int h=1,l=-1;
        while(n--){
            int iswater;
            cin>>iswater;
            if(h==-1){
                continue;
            }
            if(iswater){
                if(l==1){
                    h+=5;
                }else{
                    h+=1;
                }
            }else if(l==0){
                h=-1;
            }

            l=iswater;
        }
        cout<<h<<"\n"; 
    }
    return 0;
}
