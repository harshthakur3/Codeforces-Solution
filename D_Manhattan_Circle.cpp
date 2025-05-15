#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int i1, j1, i2, j2;
        int count = 0;
        char a[n][m];
        for(int i = 0; i < n; i ++){
            for(int j = 0; j < m ; j++){
                cin >> a[i][j];
            }
        }
        for(int i = 0; i < n; i ++){
            for(int j = 0; j < m ; j++){
                if(a[i][j] == '#'){
                    count++;
                    if(count == 1){
                        i1 = i;
                        i2 = i;
                        j1 = j;
                        j2 = j;
                    }
                    i2 = i;
                    j2 = j;
                }
            }
        }
        cout << (i1 + 1 + i2 + 1)/2 << " " << j1 + 1 << endl;
    }
}