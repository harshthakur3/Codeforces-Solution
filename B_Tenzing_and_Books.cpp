#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        vector<int> a(n), b(n), c(n);
        int ans = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        for(int i = 0; i < n; i++){
            cin >> c[i];
        }

        int pa = 0, pb = 0, pc = 0;
        while (pa < n && ((a[pa] | x) == x)) {
            ans |= a[pa];
            ++pa;
        }
 
        while (pb < n && ((b[pb] | x) == x)) {
            ans |= b[pb];
            ++pb;
        }
 
        while (pc < n && ((c[pc] | x) == x)) {
            ans |= c[pc];
            ++pc;
        }
        if(ans == x) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}