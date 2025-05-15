#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector< pair<int, int> > v(n);
        int h = 0, l = 0;
        for(int i = 0; i < n; i++){
            cin >> v[i].first >> v[i].second;
            if(i > 0){
                h += v[i].first;
                l += v[i].second;
            }
        }
        cout << (h + m)*2 + (l + m)*2 << endl;
    }
}