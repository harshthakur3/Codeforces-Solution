#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll int t;
    cin >> t;
    while(t--){
        ll int n;
        cin >> n;
        vector<char> c(n);
        vector<ll int> a(n);
        
        for(int i = 0; i < n ; i++){
            cin >> c[i];
        }
        c.push_back('0');
        for(int i = 0; i < n ; i++){
            cin >> a[i];
        }
        ll int i = 0;
        ll int sum = 0;
        if(c[0] == '1'){
            while(c[i] != 0){
                sum += a[i];
                i++;
            }
        }
        int j = i;
        while(j < n){
            if(c[j] == '0' && c[j + 1] == '1'){
                int l = -1;
                int r = -1;
                l = j;
                j++;
                while(c[j] != '0'){
                    j++;
                }
                r = j;
                ll int mini = INT_MAX;
                ll int temp = 0;
                for(int i = l; i < r; i++){
                    temp += a[i];
                    mini = min(mini, a[i]);
                }
                sum += temp - mini;
            }
            else{
                j++;
            }
        }
        cout << sum << endl;
    }
}