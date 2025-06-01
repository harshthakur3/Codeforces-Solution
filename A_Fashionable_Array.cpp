#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        if((v[0]%2) == v[n - 1]%2){
            cout << 0 << endl;
        }
        else{
            int a = 0, b = 0;
            if(v[0]%2 == 0){
                for(int i = 0; i < n; i++){
                    if(v[i]%2 == 1){
                        a = i;
                        break;
                    }
                }
            }
            else{
                for(int i = 0; i < n; i++){
                    if(v[i]%2 == 0){
                        a = i;
                        break;
                    }
                }
            }


            if(v[n - 1]%2 == 0){
                for(int i = n - 1; i >= 0; i--){
                    b++;
                    if(v[i]%2 == 1){
                        break;
                    }
                    
                }
            }
            else{
                for(int i = n - 1; i >= 0; i--){
                    b++;
                    if(v[i]%2 == 0){
                        break;
                    }
                    
                }
            }
            b--;
            cout << min(a, b) << endl;
        }
    }
}