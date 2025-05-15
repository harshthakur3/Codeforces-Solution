#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n);

        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int count = 0;  

        
        for (int i = 0; i < n; i++) {
            int len = 1; 

     
            while (i + 1 < n && v[i] <= v[i + 1]) {
                len++;
                i++; 
            }

        
            count += len * (len + 1) / 2;
        }

        cout << count << endl;
    }

    return 0;
}
