#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, t;
    cin >> n >> t;
    vector<int> v(n + 1);
    v[0] = 0;
    for(int i = 1; i <= n; i++){
        cin >> v[i];
        v[i] += v[i - 1];
    }
    int j = 1, maxi = 0;
    for(int i = 1; i <= n; i++){
        while(j <= n && v[j] - v[i - 1] <= t){
            j++;
        }
        maxi = max(maxi, j - i);
    }
    cout << maxi << endl;
}