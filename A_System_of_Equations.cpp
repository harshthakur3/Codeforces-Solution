#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, m;
    cin >> n >> m;
    int count = 0;
    for(int i = 0; i <= sqrt(max(n,m)); i++){
        for(int j = 0; j <= sqrt(max(n,m)); j++){
            if(i*i + j == n && i + j*j == m){
                count++;
            }
        }
    }
    cout << count;
}

int main(){
    solve();
    return 0;
}
