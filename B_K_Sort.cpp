#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        long long int temp = 0;
        long long int maxi = 0;
        for(int i = 1; i  < n; i++){
            if(v[i] < v[i - 1]){
                long long int a = v[i - 1] - v[i];
                temp += a;
                maxi = max(maxi, a);
                v[i] = v[i - 1];
            }
        }
        cout << temp +  maxi << endl;
    }
}