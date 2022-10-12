#include <bits/stdc++.h>
using namespace std ;

#define nline '\n'

bool cmp(pair<string,vector<int>>& x , pair<string,vector<int>>& y){
    if(abs(x.second[0] - y.second[0]) > 10) 
        return x.second[0] > y.second[0] ;

    else return x.first < y.first ; 
}

int main(){
    int n ;
    cin >> n ;

    vector<pair<string,vector<int>>> v(n) ;

    for (int i = 0 ; i < n ; ++i)
    {
        string s ;
        cin >> s ;

        vector<int> temp(5) ;
        int sum = 0 ;

        for (int j = 0 ; j < 4 ; ++j)
        {
            cin >> temp[j + 1] ;
            sum += temp[j + 1] ;
        }
        temp[0] = sum ;
        v[i] = {s,temp} ;
    }

    sort(v.begin(),v.end(),cmp) ;

    for(auto &x:v){
        cout << x.first << ' ' ;
        for(auto &y:x.second) cout << y << ' ' ;
            cout << nline ;
    }
}
