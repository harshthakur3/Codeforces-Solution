#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    int sum = 0;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        sum += v[i];
    }
    sum -= m;
    bool flag = false;
    for(int i = 0; i < n; i++){
        if(v[i] == sum) flag = true;
    }

    if(flag) cout << "Yes";
    else cout << "No";
}