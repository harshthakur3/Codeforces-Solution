#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        map<int, int> m;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            m[a[i]]++;
        }
        if(m.size() == 1){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
            for(int i = 0; i < n; i++){
                if(i == 1){
                    cout << "B";
                }
                else{
                    cout << "R";
                }
            }
            cout << endl;
        }
        
    }
}