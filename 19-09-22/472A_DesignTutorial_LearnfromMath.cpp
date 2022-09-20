#include <bits/stdc++.h>
using namespace std;

bool check(int n){
    if (n <= 1){
        return false;
    }
 
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            return false;
        }
    }
    return true;
}

int main()
{
    long long int n;
    cin>>n;
    
    for(int i=4;i<n;i++){
        int x,y;
        bool ans=check(i);
        if(ans!=1){
            x=i;
            y=n-x;
            if(!check(y)){
            cout<<x<<" "<<y;
             break;
            }
           
        }
    }

    return 0;
}
