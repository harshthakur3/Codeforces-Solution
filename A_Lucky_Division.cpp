#include<bits/stdc++.h>
using namespace std;

int check(int n){
    int temp;
    while(n > 0){
        temp = n % 10;
        if(temp != 7 && temp != 4){
            cout << "NO";
            break;
        }
        n = n / 10;
    }
    if(n == 0) cout << "YES";
    return 0;
}

void solve(){
    long long int n;
    cin >> n;
    
    if(n % 4 == 0 || n % 7 == 0 || n % 47 == 0 || n % 74 == 0) 
        cout << "YES";
    else{
        check(n);
    }
}

int main(){
    solve();
    return 0;
}

