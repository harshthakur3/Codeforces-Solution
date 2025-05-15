#include<bits/stdc++.h>
using namespace std;
const int INF = 1e9;
const int MAXN = 2000;
int a[MAXN][MAXN];
int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n, m, sum = 0;
        cin >> n >> m;
        string s;
        for (int i = 0; i < n; ++i) {
            cin >> s;
            for (int j = 0; j < m; ++j) {
                a[i][j] = s[j] - '0';
                sum += a[i][j];
            }
        }
        int minn = INF;
        bool flag = false;
        for (int i = 0; i < n - 1; ++i) {
            for (int j = 0; j < m - 1; ++j) {
                int cnt = a[i][j] + a[i + 1][j] + a[i][j + 1] + a[i + 1][j + 1];
                if (cnt == 0 || cnt == 1 || cnt == 2){
                    flag = 1;
                    break;
                }
                minn = min(minn, cnt);
                if(flag) break;
            }
        }
        if(flag){
            cout << sum << endl;
        }
        else{
            cout << sum - minn + 2<< endl;
        }
        /*
        if (sum == 0) cout << "0\n";
        else{
            if(flag){
                cout << sum << endl;
            }
            else{

            }
        }
        */
    }
    return 0;
}
