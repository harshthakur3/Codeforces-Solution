#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        int index = 0;
        int aa = 0;
        int b = 0;
        for(int i = 0 ; i < n ; i++){
            cin >> a[i];
        }
        if(a[0] == a[1]){
            for(int i = 0; i < n; i++){
                if(a[i] != a[0]) index  = i;
            }
        }
        else if(a[0] != a[1]){
            index = 0;
            for(int i = 0; i < n; i++){
                if(a[i] == a[0]) aa++;
                else b++;
            }
            if(aa == 1)index = 0;
            else index = 1;
        }
        cout << index + 1 << endl;
    }
}