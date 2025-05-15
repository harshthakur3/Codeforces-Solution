#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        int count = 0;
        for(int i = 1 ; i < n - 1 ; i++){
            if(a[i] == a[i - 1] && a[i] == a[i + 1] && a[i] == b[i] && a[i] != b[i - 1] && a[i] != b[i + 1]){
                count++;
            }
            if(b[i] == b[i - 1] && b[i] == b[i + 1] && b[i] == a[i] && b[i] != a[i - 1] && b[i] != a[i + 1]){
                count++;
            }
        }
        cout << count << endl;
    }
}