#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n = 1;
    cin >> n;
    
    int i = 1, j = n * n;
    vector<int> vec;
    while (i <= j) {
        vec.push_back(i++);
        if (j >= i)
            vec.push_back(j--);
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << vec[i * n + j] << " ";
        }
        cout << "\n";
        i++;
        if (i < n) {
            for (int j = 0; j < n; j++) {
                cout << vec[(i + 1) * n - j - 1] << " ";
            }
            cout << "\n";
        }
    }
}

int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
