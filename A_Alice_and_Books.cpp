#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        long long a[n];
        long long maxx = INT_MIN;
        int maxi = - 1;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            if(a[i] >= maxx){
                maxx = a[i];
                maxi = i;
            }
        }
        long long maxx2 = INT_MIN;
        if(maxi == n - 1){
            for(int i = 0; i < n - 1; i++){
                if(a[i] >= maxx2){
                    maxx2 = a[i];
                }
            }
            cout << maxx + maxx2 << endl;
        }
        else{
            cout << maxx + a[n - 1] << endl;
        }
        //cout << maxx + maxx2 << endl;
    
    }
}