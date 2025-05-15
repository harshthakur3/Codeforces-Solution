#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        long long int sum = 0, neg = 0;
        for(int i = 0; i < n; i++){
            sum += a[i];
            neg = min(neg,sum);
        }
        cout << sum + 2*abs(neg) << endl;
    }
}