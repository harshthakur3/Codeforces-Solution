#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        
        cin >> n;
        long long int a[n];
        int sum = 0;
        for(int i = 0; i < n; ++i){
            cin >> a[i];
            sum = sum + a[i];
        }
        sort(a, a+n);
        if(a[0] != a[1]){
            cout << "YES" << endl;
        }
        
        else {
            bool hey = false;
            for(int i = 2; i < n ; ++i){
                if(a[i]%a[0] != 0){
                    hey = true;
                    break;
                }
            }
            if(hey) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        
        
    }
    return 0;
}