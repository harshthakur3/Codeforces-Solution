#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        vector<long long> v;
        vector<int> vis(60, 0);
        int count = 0;

        for(int i = 0; i < 60; i++){
            long long val = 1LL << i;
            if((n & val) != 0){
                vis[i] = 1;
                count++;
            }
        }

        if(count == 1){
            cout << 1 << endl << n << endl;
        }
        else{
            v.push_back(n);
            for(int i = 0; i < 60; i++){
                if(vis[i] == 1){
                    v.push_back(n - (1LL << i));
                }
            }
            cout << v.size() << endl;
            for(int i = v.size() - 1; i >= 0; i--){
                cout << v[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
