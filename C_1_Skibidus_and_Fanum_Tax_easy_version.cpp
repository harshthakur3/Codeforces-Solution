#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < m; i++){
            cin >> b[i];
        }

        int mini = min(a[0], b[0] - a[0]);
        bool flag = false;
        for(int i = 1; i < n; i++){
            int o1 = min(a[i], b[0] - a[i]);
            int o2 = max(a[i], b[0] - a[i]);
            if(o1 >= mini) mini = o1;
            else if(o2 >= mini) mini = o2;
            else{
                flag = true;
                break;
            }
        }
        if(flag) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}