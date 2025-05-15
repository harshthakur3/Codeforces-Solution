#include<iostream>
using namespace std;
void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 0;
    bool b = false;
    for(int i = 0; i< n ;i++){
        if(s[i] == '.') count++;
    }
    for(int i = 1; i< n - 1 ;i++){
        if(s[i] == '.' && s[i - 1] == '.' && s[i + 1] == '.'){
            b = true;
        }
    }
    if(b) cout << 2 << endl;
    else cout << count << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}