#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        vector<pair<int, int> > vp;
        if(n%2){
            cout << -1 << endl;
        }
        else{
            for(int i = 0; i < n - 1; i++){
                if(v[i] == v[i + 1]){
                    vp.push_back({i , i + 1});
                    i++;
                }
                else{
                    vp.push_back({i , i});
                    vp.push_back({i + 1, i + 1});

                    i++;
                }
            }
            cout << vp.size() << endl;
            for(int i = 0; i  < vp.size(); i++){
                cout << vp[i].first + 1 << " " << vp[i].second + 1 << endl;
            }
        }
    }
}