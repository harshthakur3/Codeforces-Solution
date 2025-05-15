#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a = 0, b = 0;
    for (int i = 0; i < n; i++) {
        string x;
        cin >> x;
        if (x == "++X" || x == "X++") {
            a++;
        } else {
            b++;
        }
    }
    cout << a - b;
    return 0;
}
