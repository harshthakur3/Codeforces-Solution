#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();
    int a = 0, b = 0;


    for (int i = 0; i < n; i++) {
        if (s[i] == 'A') a++;
        else b++;
    }

        if(a%2 != 0 || b%2 != 0){
            cout << "NO";
        }
        else if (b == 0) {
            cout << "YES" << endl;
            cout << 1 << " " << a / 2 + 1;
        }
        else if (a == 0) {
            cout << "YES" << endl;
            cout << 1 << " " << b / 2 + 1;
        }
        else {
            
                int prefA[n + 1] = {0}, prefB[n + 1] = {0};
                for (int i = 0; i < n; i++) {
                    prefA[i + 1] = prefA[i] + (s[i] == 'A');
                    prefB[i + 1] = prefB[i] + (s[i] == 'B');
                }

                for (int i = n / 2; i <= n; i++) {
                    int aa = prefA[i] - prefA[i - n / 2];
                    int bb = prefB[i] - prefB[i - n / 2];

                    if (aa == bb) {
                        cout << "YES" << endl;
                        cout << (i - n / 2 + 1) << " " << i + 1 << endl;
                        return 0; 
                    }
                }
                cout << "NO";
            
        }
    }

