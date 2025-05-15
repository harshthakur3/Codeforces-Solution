#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        long long int a[n];
        for(int i = 0; i < n ; ++i){
            cin >> a[i];
        }
        sort(a, a + n);
        //int sum = 0;
        
        cout << a[n-1] - a[0] << endl;
    }
}