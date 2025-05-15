#include <bits/stdc++.h>
using namespace std;

int main(){ 
    int t;
    cin >> t;
    while (t--) {
        long long int n, x;
        cin >> n >> x;
        vector<long long int> v(n);
        long long int sum = 0;
        for(int i = 0; i < n ; i++){
            cin >> v[i];
            sum += v[i];
        }
        sort(v.begin(), v.end());
        long long int larger = v[n - 1];
        if(sum%x == 0){
            cout << max(sum/x,larger) << endl;
        }
        else{
            cout << max(sum/x + 1,larger) << endl;
        }
    }

    return 0;
}
