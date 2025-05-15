#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, a, b;
        cin >> n >> a >> b;
        int v[n];
        for(int i = 0; i < n; i++){
            v[i] = i + 1;
        }
        if(a + b > n - 2) cout << -1 << endl;
        else if(abs(a-b) > 1) cout << -1 << endl;
        else{
            if(b >= a){
                int i = 0;
                if(a == b) i = 1;
                for(int j = 0; j < b; j++, i += 2){
                    swap(v[i], v[i + 1]);
                }
                for(int i = 0; i < n; i++){
                    cout << v[i] << " ";
                }
                cout << endl;

            }
            else{
                int i=n-1;
                for(int j=0;j<a;j++,i-=2){
                    swap( v[i] , v[i-1] );
                }
                for(int i = 0; i < n; i++){
                    cout << v[i] << " ";
                }
                cout << endl;
            }
        }
    }
}