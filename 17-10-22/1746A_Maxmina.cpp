#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        int sum = 0;
        for(int i = 0 ; i < n ; i++){
            int a;
            cin >> a;
            sum += a;
        }
        if(sum > 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
