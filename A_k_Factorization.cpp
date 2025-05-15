#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> v;
    int count = 0;
    while(n%2 == 0){
        v.push_back(2);
        n = n/2;
        count++;
    }
    for(int i = 3; i <= sqrt(n) ; i = i + 2){
        while(n%i == 0){
            n = n/i;
            v.push_back(i);
        }
    }
    if(n > 2){
        v.push_back(n);
    }
    if(v.size() < k){
        cout << -1;
    }
    else{
        for(int i = 0; i < k - 1; i++){
            cout << v[i] << " ";
        }
        long long ans = 1;
        for(int i = k - 1 ; i < v.size(); i++){
            ans *= v[i];
        }
        cout << ans;
    }
    return 0;
}
