#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    map<char, int> freq;
    for (char c : s) {
        freq[c]++;
    }
    int odd_count = 0;
    char odd_char = '\0';
    for (auto &it : freq) {
        if (it.second % 2 != 0) {
            odd_count++;
            odd_char = it.first;
        }
    }
    if (odd_count > 1) {
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    string first_half = "", middle = "";
    for (auto &it : freq) {
        int half = it.second / 2;
        while (half--) {
            first_half += it.first;
        }
        if (it.second % 2 != 0) {
            middle = it.first;
        }
    }
    string second_half = first_half;
    reverse(second_half.begin(), second_half.end());
    cout << first_half + middle + second_half << endl;

    return 0;
}
