#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int i = 0, j = n - 1;
    int count = 0;
    while(i <= j){
        if(v[i] + v[j] <= x){
            count++;
            i++;
            j--;
        }
        else{
            j--;
            count++;
        }
    }
    cout << count;
}