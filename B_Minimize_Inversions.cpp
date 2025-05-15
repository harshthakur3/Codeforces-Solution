#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n], b[n];
        for(int i = 0; i < n ; ++i){
            cin >> a[i];
        }
        for(int i = 0; i < n ; ++i){
            cin >> b[i];
        }
        vector<pair<int, int>> pairs;
        for (int i = 0; i < n; ++i){
            pairs.push_back({a[i], b[i]});
        }
        sort(pairs.begin() , pairs.end());
        /*for (int i = 0; i < n - 1; ++i) {
            for (int j = 0; j < n - i - 1; ++j) {
                if (a[j] > a[j + 1]) {
                    
                    int temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                    int temp1 = b[j];
                    b[j] = b[j + 1];
                    b[j + 1] = temp1;
                }
            }
        }*/
        for(int i = 0; i < n ; ++i){
            cout << pairs[i].first << " ";
        }
        cout << endl;
        for(int i = 0; i < n ; ++i){
            cout << pairs[i].second << " ";
        }
        cout << endl;
    }
}