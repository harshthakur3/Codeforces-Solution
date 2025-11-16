#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n;
    cin >> n;
    vector<int> v(n);
    int sum = 0;
    int maxi = -1e9;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        sum += v[i];
        maxi = max(maxi, sum);
        if(sum < 0) sum = 0;
        
    }
    cout << maxi;

}