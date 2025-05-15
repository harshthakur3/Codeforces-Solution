#include<iostream>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int a[n];
    int e = 0, o = 0;
    for(int i = 0; i< n ; i++){
        cin >> a[i];
        if(a[i]%2 == 0) e++;
        else o++;
    }
    if(n%2 != 0){
        cout << -1 << endl;
    }
    else {
        cout << abs(e - o)/2 << endl;
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}