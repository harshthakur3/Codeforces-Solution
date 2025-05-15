#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        bool flag = true;

        // Loop corrected: starting at 0 and going to n-1
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }

        for(int i = 1; i < n; i++){
            if(v[i] < v[i - 1]){
                flag = false;
                break;
            }
        }

        if(flag){
            cout << 0 << endl;
        }
        else{
            vector<pair<int, int>> vp;
            vp.push_back({1, n});

            for(int i = 1; i < n - 1; i++){
                if((v[i] + v[0]) % 2 == 1){
                    vp.push_back({1, i + 1});
                }
                else{
                    vp.push_back({i + 1, n});
                }
            }

            cout << vp.size() << endl;
            for(int i = 0; i < vp.size(); i++){
                cout << vp[i].first << " " << vp[i].second << endl;
            }
        }
    }
}
