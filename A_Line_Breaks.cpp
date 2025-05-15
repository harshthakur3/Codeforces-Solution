#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            string x;
            cin >> x;
            v[i] = x.size();
        }
        int count = 0;
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum += v[i];
            if(sum > m) break;
            else count++;
        }
        cout << count << endl;
    }
}