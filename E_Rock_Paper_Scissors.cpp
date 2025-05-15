#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
    int arr[5] = {1,4,7,9,15};
    auto it = lower_bound(begin(arr), end(arr), 5);
    it--;
    cout << *it;
}

