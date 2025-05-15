#include<bits/stdc++.h>
using namespace std;
int main() {
    long long int n, m;
    cin >> n >> m;
    int x[m], a[m];
    long long int sum = 0;
    
    for(int i = 0; i < m; i++) {
        cin >> x[i];
    }
    for(int i = 0; i < m; i++) {
        cin >> a[i];
        sum += a[i];
    }
    bool flag = true;
    if(sum == n) {
        for(int i = m - 1; i >= 0; i--) {
            if(i == m - 1) {
                if(x[i] > n - a[i] + 1) {
                    flag = false;
                    break;
                }
            }
            else {
                if(x[i] > x[i + 1] - a[i]) {
                    flag = false;
                    break;
                }
            }
        }
    }
    else if(sum != n) {
        flag = false;
    }
    
    if(!flag) {
        cout << -1;
    }
    else {
        long long steps = 0;
        for(int i = 0; i < m - 1; i++){
            int s = x[i + 1] - x[i] - 1;
            steps += s*(s + 1)/2;
            int extra = a[i] - 1 - s;;
            steps += extra*(x[i + 1] - x[i]);
            x[i + 1] += extra;
        }
        int s = n - x[m - 1];
        steps += s*(s + 1)/2;
        cout << steps;
    }
    return 0;
}