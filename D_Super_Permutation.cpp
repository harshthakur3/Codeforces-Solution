#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        if(n == 1){
            cout << 1 << endl;
        }
        else{
            if(n%2 == 1){
                cout << -1 << endl;
            }
            else{
                for(int i = 0; i < n; i++){
                    if(i == 0) cout << n << " ";
                    else if(i%2 == 0){
                        cout << i << " ";
                    }
                    else{
                        cout << n - i << " ";
                    }
                }
                cout << endl;
            }
        }
    }
}