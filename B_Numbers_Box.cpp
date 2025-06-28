#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int sum = 0, mini = INT_MAX;
        int neg = 0;
        for(int i = 0; i < n*m; i++){
            int x;
            cin >> x;
            sum += abs(x);
            mini = min(mini, abs(x));
            if(x < 0) neg++;
        }
        if(neg%2) cout << sum - 2*mini << endl;
        else cout << sum << endl;
    }
}