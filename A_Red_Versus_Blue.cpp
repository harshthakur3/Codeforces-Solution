#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, r, b;
    cin >> n >> r >> b;
    int a = r / (b+1);
    int b_ = r % (b+1);
    for(int i = 0 ; i < b ; i++){
        for(int i = 0 ; i < a; i++){
            cout << 'R';
        }
        if(b_){
            cout << 'R';
            b_--;
        }
        cout << 'B';
    }
    for(int i = 0 ; i < a ; i++){
        cout << 'R';
    }
}

int main() {
    int _t;
    cin >> _t;
    while(_t--) {
        solve();
        cout << endl;
    }
}