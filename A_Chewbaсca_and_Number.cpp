#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    int v[50];
    int length = 0;
    while (n != 0) {
        v[length] = n%10;
        length++;
        n = n / 10;
    }
    for (int i = 0; i < length; i++) {
        if (v[i] > 9 - v[i]) {
            v[i] = 9 - v[i];
        }
    }
    if(v[length - 1] == 0){
        v[length - 1] = 9;
    }
    for (int i = length - 1; i >= 0; i--) {
        cout << v[i];
    }
    return 0;
}
