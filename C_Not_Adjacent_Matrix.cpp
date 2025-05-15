#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n == 1) cout << 1 << endl;
        else if(n == 2) cout << -1 << endl;
        else{
            int a[n + 1][n + 1];
            int count = 1;
            for(int i = 1; i <= n; i++){
                for(int j = 1; j <= n; j++){
                    if((i + j)%2 == 0){
                        a[i][j] = count;
                        count++;
                    }
                }
            }
            for(int i = 1; i <= n; i++){
                for(int j = 1; j <= n; j++){
                    if((i + j)%2 == 1){
                        a[i][j] = count;
                        count++;
                    }
                }
            }
            for(int i = 1; i <= n; i++){
                for(int j = 1; j <= n; j++){
                    cout << a[i][j] << " ";
                }
                cout << endl;
            }
            cout << endl;
        }
    }
}