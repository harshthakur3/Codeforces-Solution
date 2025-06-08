#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v;
        for(int i = 1; i <= n; i += 2){
            if(i <= n){
                v.push_back(i);
            }
        }
        if(n%2 == 0){
            for(int i = n; i >= 0; i-= 2){
                if(i > 0){
                    v.push_back(i);
                }
            }
        }
        else{
            for(int i = n - 1; i >= 0; i-= 2){
                if(i > 0){
                    v.push_back(i);
                }
            }
        }



        for(int i = 0; i < v.size(); i++){
            cout << v[i] << " ";
        }
        cout << endl;
    }
}