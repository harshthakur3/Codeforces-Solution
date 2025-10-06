#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
    int n, k;
    cin >> n >> k;
    int temp = n*n - k;
    if(temp == 1){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
        for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(temp > 0){
                if(i == 0 && j == 0){
                    cout << "R";
                }
                else if(i == 0){
                    cout << "L";
                }
                else cout << "U";
                temp--;
            }
            else{
                cout << "D";
            }
        }
        cout << endl;
    }
    }
    
}
}