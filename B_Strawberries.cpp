#include<bits/stdc++.h>
using namespace std;

int main() {
    long long int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    
    int count = 0;
    for(int i = 0; i <= n - k; i++) {
        int c = 0;
        for(int j = 0; j < k; j++) {
            if(s[i + j] == 'O') {
                c++;
            }
        }
        if(c == k) {
            count++;
            for(int j = 0; j < k; j++) {
                s[i + j] = 'X';
            }
            i += k - 1;
        }
    }
    cout << count;
    return 0;
}