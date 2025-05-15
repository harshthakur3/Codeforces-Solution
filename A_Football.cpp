#include<iostream>
using namespace std;

void solve(){
    int n;
    string a, b;
    cin >> n >> a;
    int aa = 1, bb = 0;
    for(int i = 1; i < n ; i++){
        string x;
        cin >> x;
        if(x == a) aa++;
        else{
             bb++;
             b = x;
        }
    }
    if(aa > bb) 
        cout << a;
    else 
        cout << b;
}

int main(){
    solve();
    return 0;
}
