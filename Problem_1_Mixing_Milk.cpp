#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll c[3];
    ll a[3];
    int j = 0;
    for(int i = 0 ; i < 3 ; i++){
        cin >> c[i] >> a[i];
    }
    for(int i = 0 ; i < 100 ; i++){
        if(j == 2){
            ll mini = min(a[j], c[0] - a[0]);
            a[j] -= mini;
            a[0] += mini;
            j = 0;
        }
        else{
            ll mini = min(a[j], c[j + 1] - a[j + 1]);
            a[j] -= mini;
            a[j + 1] += mini;
            j++;
        }
    }
    for(int i = 0 ; i < 3 ; i++){
        cout << a[i] << endl;
    }
}