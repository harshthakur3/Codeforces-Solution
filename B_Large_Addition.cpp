#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long int x;
        cin >> x;
        vector<long long int> v;
        while(x > 0){
            v.push_back(x%10);
            x = x / 10;
        }
        reverse(v.begin(), v.end());
        int n = v.size();
        if(v[0] != 1 || v[n - 1] == 9){
            cout << "nO" << endl;
            continue;
        }
        else{
            bool flag = false;
            for(int i = 0; i < n - 1; i++){
                if(v[i] == 0) flag = true;
            }
            if(flag){
                cout << "No" << endl;
            }
            else{
                cout << "yEs" << endl;
            }
        }
    }
}