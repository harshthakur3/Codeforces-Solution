#include<iostream>
using namespace std;
void solve(){
    int n, m;
    cin >> n >> m;
    int a[m];
    for(int i = 0 ;i < m ; i++){
        cin >> a[i];
    }
    int ans = a[0] - 1;
    for(int i = 0; i < m - 1 ; i++){
        if(a[i + 1] < a[i]){
            ans = ans + a[i + 1] - a[i] + n;
        }
        else {
            ans = ans + a[i + 1] - a[i];
        }
    }
    cout << ans;
}
int main(){
    solve();
}