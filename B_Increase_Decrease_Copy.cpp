#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        long long int a[n];
        long long int a1[n + 1];
        bool present = false;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0 ; i <= n; i++){
            cin >> a1[i];
        }
        long long int count = 1;
        for(int i = 0; i < n; i++){
            count += abs(a[i] - a1[i]);
            if(a1[n]>=a[i] && a1[n] <= a1[i] || a1[n]>=a1[i]&& a1[n]<=a[i]){
                present = true;
            }
        }
        long long int mini = INT_MAX;
        for(int i = 0; i <n ; i++){
            mini = min( abs(a1[n]-a1[i]) ,min(mini, abs(a1[n] - a[i])));
        }
        if(present){
            cout << count << endl;
        }
        else {
            cout << count + mini << endl;
        }
        
    }
}