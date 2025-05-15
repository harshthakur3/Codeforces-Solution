#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);  
    
    int n;
    cin >> n;
    vector<long long> v(n);
    
    
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    long long total_time = 0;

    for (int i = 0; i < n; i++) {
        if (v[i] >= 5) {
            total_time += (v[i] / 5) * 3;
            v[i] = v[i] % 5;
        }

        
        while (v[i] > 0) {
            total_time++;
            if (total_time % 3 == 0) {
                v[i] -= 3; 
            } else {
                v[i]--;
            }
        }
    }

    cout << total_time << endl;
    return 0;
}
