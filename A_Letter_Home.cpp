#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, s;
        cin >> n >> s;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }

        sort(v.begin(), v.end());
        int first = v[0];
        int last = v[n - 1];
        int a = abs(s - first);
        int b = abs(s - last);
        cout << last - first + min(a, b) << endl;
    }
}