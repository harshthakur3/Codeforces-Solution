#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
        cin >> n;
        string s;
        cin >> s;
        int count = 0;

        for (int i = 0; i <= n - 3; i += 1) {
            if (s.substr(i, 5) == "mapie") {
                count++;
                i += 4; 
            }
            else if (s.substr(i, 3) == "map") {
                count++;
            }
            else if (s.substr(i, 3) == "pie") {
                count++;
            }
        }
        cout << count << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
