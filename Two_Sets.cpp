#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int n;
    cin >> n;
    if(n*(n + 1)%4 == 0){
        cout << "YES" << endl;
        if(n%2 == 0){
            vector<int> e, o;
            for(int i = 1; i <= n; i++){
                if(i%2 == 0){
                    e.push_back(i);
                }
                else{
                    o.push_back(i);
                }
            }

            cout << n/2 << endl;
            for(int i = 0; i < n/4; i++){
                cout << e[i] << " ";
            }
            for(int i = n/4; i < n/2; i++){
                cout << o[i] << " ";
            }
            cout << endl;
            cout << n/2 << endl;
            for(int i = 0; i < n/4; i++){
                cout << o[i] << " ";
            }
            for(int i = n/4; i < n/2; i++){
                cout << e[i] << " ";
            }
        }
        else{
            vector<int> e, o;
            for(int i = 4; i <= n; i++){
                if(i%2 == 0){
                    e.push_back(i);
                }
                else{
                    o.push_back(i);
                }
            }
            n -= 3;
            cout << (n)/2 + 2 << endl;
            for(int i = 0; i < n/4; i++){
                cout << e[i] << " ";
            }
            for(int i = n/4; i < n/2; i++){
                cout << o[i] << " ";
            }
            cout << 1 << " " << 2;
            cout << endl;
            cout << (n)/2 + 1 << endl;
            for(int i = 0; i < n/4; i++){
                cout << o[i] << " ";
            }
            for(int i = n/4; i < n/2; i++){
                cout << e[i] << " ";
            }
            cout << 3;
        }
    }
    else{
        cout << "NO" << endl;
    }
}