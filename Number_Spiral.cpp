#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int i, j;
        cin >> i >> j;
        if(i == j) cout << i*i - (i - 1) << endl;
        else if(i > j){
            if(i%2 == 0){
                cout << i*i - (j - 1) << endl;
            }
            else{
                cout << (i - 1)*(i - 1) + j << endl;
            }
        }
        else{
            if(j%2 == 1){
                cout << j*j - (i - 1) << endl;
            }
            else{
                cout << (j - 1)*(j - 1) + i << endl;
            }
        }
    }
}