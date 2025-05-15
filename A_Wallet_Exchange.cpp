#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long int a, b;
        cin >> a >> b;
        long long int s = a + b;
        if(s%2 == 0) cout << "Bob" << endl;
        else cout << "Alice" << endl;
        
    }
}