#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
    int n, x;
    cin >> n >> x;
    int a[n];
    int count = 0;
    for(int i = 0 ; i  < n ; i++){
        cin >> a[i];
    }
    int mini = a[0];
    int maxi = a[0];
    for(int i = 0; i < n ; i++){
        if(a[i] > maxi){
            maxi = a[i];
        }
        if(a[i] < mini){
            mini = a[i];
        }
        if(maxi - mini > 2*x){
            count++;
            maxi = a[i];
            mini = a[i];
        }
    }
    cout << count << endl;
    }
}