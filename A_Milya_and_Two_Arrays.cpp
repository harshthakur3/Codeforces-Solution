#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        set<int> s1, s2;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            s1.insert(a[i]);
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
            s2.insert(b[i]);
        }
        int x = s1.size() + s2.size();
        if(x > 3){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}