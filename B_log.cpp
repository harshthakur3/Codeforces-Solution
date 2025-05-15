#include <bits/stdc++.h>

using namespace std;

int main() {
  using ll = long long;
  ll n;
  cin >> n;
  ll l = 0, r = 2e9;
  while (r - l > 1) {
    ll m = (l + r) / 2;
    (m * (m + 1) / 2 <= n + 1 ? l : r) = m;
  }
  cout << n - l + 1 << endl;
  return 0;
}
