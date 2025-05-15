#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long int n, k;
        cin >> n >> k;
        if(k == (4*n - 2)) cout << 2*n << endl;
        else{
            if(k%2 == 0) cout << k/2 << endl;
            else cout << (k + 1)/2 << endl;
        }
    }

    return 0;
}
