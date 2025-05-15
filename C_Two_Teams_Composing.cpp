#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n ; i++){
            cin >> a[i];
        }
        sort(a, a+n);
        set<int> s;
        for(int i = 0; i < n; i++){
            s.insert(a[i]);
        }
        int unique = s.size() - 1;
        int equal = 0;
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++){
            mp[a[i]]++;
             if (mp[a[i]] > equal) {
                equal = mp[a[i]];
            }
        }
        cout << max(min(unique, equal), min(unique + 1, equal - 1)) << endl;
    }
}