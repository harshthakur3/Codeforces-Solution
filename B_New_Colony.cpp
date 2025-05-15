#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> h(n);
        for(int i = 0; i < n; i++){
            cin >> h[i];
        }
        bool isNonIncreasing = true;
        for(int i = 0; i < n - 1; i++){
            if(h[i] < h[i + 1]){
                isNonIncreasing = false;
                break;
            }
        }
        if(isNonIncreasing){
            cout << -1 << endl;
            continue;
        }
        int index = -1;
        while(k--){
            bool incremented = false;
            for(int i = 0; i < n - 1; i++){
                if(h[i] < h[i + 1]){
                    h[i]++;
                    index = i + 1;
                    incremented = true;
                    break;
                }
            }
            if(!incremented){
                index = -1;
                break;
            }
        }
        
        cout << index << endl;
    }
    return 0;
}
