#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        long long int sum = 0;
        vector<long long int> v;
        for(int i = 0; i < n; i++){
            if(s[i] == 'L'){
                sum += i;
                v.push_back((n - 1 - i) - i);
            }
            else{
                v.push_back(i - (n - 1 - i));
                sum += n - 1 - i;
            }
        }
        sort(v.rbegin(), v.rend());
        for(int i = 0; i < n; i++){
            if(v[i] > 0){
                sum += v[i];
                
            }
            cout << sum << " ";
            
        }

        cout << endl;
    }
}