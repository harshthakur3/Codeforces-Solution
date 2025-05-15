#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> v(k), safe;
        for(int i = 0; i < k; i++){
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        if(k == 1){
            cout << 2 << endl;
        }
        else{
            int start = 0, end = 0;
            start = v[0] - 1;
            end = n - v[k - 1];
            safe.push_back(start + end);
            for(int i = 1; i < k; i++){
                safe.push_back(v[i] - v[i - 1] - 1);
            }
            sort(safe.rbegin(), safe.rend());
            if(n == k){
                cout << n << endl;
            }
            else if(safe[0] < 3){
                cout << n - 1 << endl;
            }
            else {
                int ans = 0;
                for(int i = 0; i < safe.size(); i++){
                    if(safe[i] - i*4 > 0){
                        if(safe[i] - i*4 < 3){
                            ans += 1;
                        }
                        else{
                            ans += safe[i] - 1 - i*4;
                        }
                    }
                }
                cout << n - ans << endl;
            }

        }
    }
}