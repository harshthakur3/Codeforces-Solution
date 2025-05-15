#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; ++i){
            cin >> a[i];
        }
        sort(a, a+n);
        int c = 0; 
        for(int i = 0; i < n; ++i){
            if(a[i] < 0) c = i + 1; 
        }
        for(int i = 0; i < c; ++i){
            a[i] = -a[i];
        }
        long long int sum = 0;
        for(int i = 0; i < n; ++i){
            sum = sum + a[i];
        }
        cout << sum << endl;
    }
    return 0;
}
