#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        bool flag = true;
        for(int i = 0; i < n; i++){
            if(a[i] <= b[i]){
                flag = false;
                break;
            }
        }
        if(flag){
            sort(b.rbegin(), b.rend());
            long long  result = 1;
            for(int i = 0; i < n; i++) {
                long long temp=upper_bound(a.begin(), a.end(), b[i]) - a.begin();
                long long count = a.size() - temp;
                result = result * max(count - i, 0LL)%1000000007;
            }
            cout << result << endl;
        }
        else cout << 0 << endl;

    }
}