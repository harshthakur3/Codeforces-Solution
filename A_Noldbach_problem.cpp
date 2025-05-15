#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n + 1, 0); 

    for (int i = 2; i <= n; i++){
        a[i] = isPrime(i);
    }

    vector<int> v;
    for (int i = 2; i <= n; i++){
        if (a[i] == 1){
            v.push_back(i);
        }
    }

    int count = 0;
    for (int i = 1; i < v.size(); i++){ 
        int sum = v[i] + v[i - 1] + 1;
        if (sum <= n && a[sum] == 1){
            count++;
        }
    }

    if (count >= k){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
