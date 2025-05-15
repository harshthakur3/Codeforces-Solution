#include<bits/stdc++.h>
using namespace std;
#define l long long
void solve(){
    l int n;
    cin >> n;
    l int n1 = n;
    vector<l int> min1;
    vector<l int> min2;
    while(n1--){
        l int m;
        cin >> m;
        l int a[m];
        for(l int i = 0; i < m; i++){
            cin >> a[i];
        }
        sort(a, a+m);
        min1.push_back(a[0]);
        min2.push_back(a[1]);
    }
    l int sum = 0;
    for(l int i = 0; i < n; i++){
        sum += min2[i];
    }
    sort(min1.begin(), min1.end());
    sort(min2.begin(), min2.end());
    cout << sum - min2[0] + min1[0] << endl;
    
}
int main(){
    l int t;
    cin >> t;
    while(t--){
        solve();
    }
}