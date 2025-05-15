#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        map<int, int> mp;
        for(int i = 0; i < n; i++){
            cin >> v[i];
            mp[v[i]]++;
        }
        
        sort(v.begin(), v.end());
        vector<int> t;
        if(n%2 == 1){
            cout << "NO" << endl;
        }
        else{
            bool flag = true;
        for(auto it : mp){
            if(it.second > n/2){
                flag = false;
                break;
            }
        }
            for(int i = 0; i < n/2; i++){
                t.push_back(v[i]);
                t.push_back(v[i + n/2]);
            }
            bool flag = true;
            bool flag1 = 0;
            if(t[0] > t[1] && t[0] > t[n - 1]){
                flag1 = 1;
            }
            else if(t[0] < t[1] && t[0] < t[n - 1]){
                flag1 = 1;
            }
            else if(t[n - 1] > t[0] && t[n - 1] > t[n - 2]){
                flag1 = 1;
            }
            else if(t[n - 1] < t[0] && t[n - 1] < t[n - 2]){
                flag1 = 1;
            }
            for(int i = 1 ; i < n - 1; i++){
                if((t[i] > t[i - 1] && t[i] > t[i + 1])||(t[i] < t[i - 1] && t[i] < t[i + 1])){
                    flag = 1;
                }
                else{
                    flag = 0;
                    break;
                }
            }
            if(flag == 1 && flag1 == 1){
                cout << "YES" << endl;
                for(int i = 0 ; i < n ; i++){
                cout << t[i] <<  " ";
                }
                cout << endl;
 
            }
            else{
                cout << "NO" << endl;
            }
        }
    }
}