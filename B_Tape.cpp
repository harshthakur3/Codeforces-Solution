#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n, l, k;
    cin >> n >> l >> k;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    vector<pair<int, int>>diff;
    for(int i = 1; i < n; i++){
        diff.push_back({v[i] - v[i - 1], i});
    }
    sort(diff.rbegin(), diff.rend());
    // for(auto it : diff){
    //     cout << it.second << " " << it.first << endl;
    // }
    vector<int> index;
    for(int i = 0; i < k - 1; i++){
        index.push_back(diff[i].second);
        //cout << index[i] << endl;
    }
    int ans = 0, j = 0;
    sort(index.begin(), index.end());
    for(int i = 0; i < n; i++){
        if(j < index.size() && i == index[j]){
            j++;
            ans++;
        }
        else if(i == 0){
            continue;
        }
        else{
            ans += v[i] - v[i - 1];
        }
    }

    cout << ans + 1;

}