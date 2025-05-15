#include<bits/stdc++.h>
#define fori_n for(int i = 0; i<n; i++)
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int sum = 0;
        vector<int>v(n);
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        int lcm = v[0];
        for(int i = 0; i < n; i++){
            lcm = lcm*v[i]/__gcd(lcm, v[i]);
        }
        for(int i = 0; i < n; i++){
            a[i] = lcm/v[i];
            sum += a[i];
        }
        if(lcm <= sum){
            cout << -1 << endl;
        }
        else{
            for(int i = 0; i < n; i++){
                cout << a[i] << " ";
            }
            cout << endl;
        }
        
    }
}