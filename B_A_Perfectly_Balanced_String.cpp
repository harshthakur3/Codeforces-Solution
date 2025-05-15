#include<bits/stdc++.h>
using namespace std;
void solve(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int sum = 0;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
            sum += v[i];
        }
        if(sum%2){
            sum -= 1;
            sum/= 2;
        }
        else{
            sum /= 2;
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        set<char> dif;
        for(int i = 0; i < s.size(); i++){
            dif.insert(s[i]);
        }
        int n = dif.size();
        bool flag = true;
        for(int i = 0; i < s.size(); i++){
            if(s[i] != s[i%n]){
                flag = false;
                break;
            }
        }
        if(flag){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}