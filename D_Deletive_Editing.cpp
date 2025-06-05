#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s, k;
        cin >> s >> k;

        unordered_map<char, int> mp1, mp2;
        for (char ch : s) mp1[ch]++;
        for (char ch : k) mp2[ch]++;

        bool flag = true;

        // First check if all characters of k exist in s
        for (char ch : k) {
            if (mp1[ch] == 0) {
                flag = false;
                break;
            }
        }

        if (flag) {
            int i = s.size() - 1;
            int j = k.size() - 1;

            while (i >= 0 && j >= 0) {
                if (s[i] == k[j]) {
                    mp2[k[j]]--;
                    i--;
                    j--;
                } else {
                    if (mp2[s[i]] > 0) {
                        flag = false;
                        break;
                    } else {
                        i--;
                    }
                }
            }

            if (j != -1) flag = false;  // not all chars in k were matched
        }

        cout << (flag ? "YES" : "NO") << endl;
    }

    return 0;
}
