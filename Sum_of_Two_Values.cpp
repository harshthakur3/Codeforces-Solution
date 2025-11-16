#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> v(n); 

    for (int i = 0; i < n; i++) {
        cin >> v[i].first;  
        v[i].second = i + 1; 
    }
    sort(v.begin(), v.end());
    int i = 0, j = n - 1;
    int q = -1, w = -1;
    while(i <= j){
        if(v[i].first + v[j].first > x){
            j--;
        }
        else if(v[i].first + v[j].first < x){
            i++;
        }
        else{
            q = v[i].second, w = v[j].second;
            break;
        }
    }
    if(q > w) swap(q,w);
    if(q == -1 || q == w){
        cout << "IMPOSSIBLE" << endl;
    }
    else{
        cout << q << " " << w;
    }
}