#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n, res = 2;
        cin >> n;
        vector<long long int> v(n);
        for(long long int i = 0; i < n; i++){
            cin >> v[i];
        }
        while(true){
            set<long long int> rem;
            for(long long i = 0; i < v.size() ; i++ ){
                rem.insert(v[i]%res);
            }
            if(rem.size() == 2){
                break;
            }
            res = res*2;
        }
        cout << res << endl; 
        }
}