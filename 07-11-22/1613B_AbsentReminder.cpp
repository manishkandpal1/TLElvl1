#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;
    int mn = *min_element(a.begin(), a.end());
    for (int i = 0, k = 0; k < n / 2; ++i) if (a[i] != mn) {
      cout << a[i] << ' ' << mn << '\n';
      k += 1;
    }
  }
}
