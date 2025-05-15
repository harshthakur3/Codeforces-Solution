#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int>v(n);
        for(int i = 0 ; i < n ; i++){
            cin >> v[i];
        }
        int money = 0, count = 0;
        for(int i = 0 ; i < n ; i++){
            if(v[i] >= k){
                money += v[i];
            }
            if(money !=0 && v[i] == 0){
                count++;
                money--;
            }
        }
        cout << count << endl;
    }
}