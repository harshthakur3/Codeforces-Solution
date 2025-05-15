#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        string s;
        cin >> s;

        int l = 0, r = n - 1;

        vector<int> ans;

        while (l < r) {
                
                if (s[l] != s[r]) {
                    l++;
                    r--;
                } else {
                    if (s[l] == '1') {
                        string news = s.substr(0, l);
                        news.push_back('0');
                        news.push_back('1');
                        news += s.substr(l);
                        s = news;
                        ans.push_back(l);
                    } else {
                        string news = s.substr(0, r + 1);
                        news.push_back('0');
                        news.push_back('1');
                        news += s.substr(r + 1);
                        s = news;
                        ans.push_back(r + 1);
                    }
                    l++, r++;
                }
    
                if (ans.size() > 300) {
                    break;
                }
        }

        if (l == r) {
            cout << -1 << endl;
            continue;
        }

        if (ans.size() > 300) {
            cout << -1 << endl;
            continue;
        
        }

        cout << ans.size() << endl;

        for (auto i : ans) {
            cout << i << " ";
        }

        cout << endl;
    }
}