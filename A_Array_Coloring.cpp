#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        int even = 0, odd = 0;
        for(int i = 0; i < n; i++){
            cin >> v[i];
            if(v[i]%2) odd++;
            else even++;
        }
        if(odd%2 == 1){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
}