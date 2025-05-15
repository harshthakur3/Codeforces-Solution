#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        
        int sum = 0;
        int n;
        cin >> n;
        char a[n];
        
        for(int i = 0; i < n; ++i){
            cin >> a[i];
            if(a[i] == '+') sum++;
            else if(a[i] == '-') sum--;
        }
        if(sum >= 0) cout << sum << endl;
        else cout << -sum << endl;
        
    }
}