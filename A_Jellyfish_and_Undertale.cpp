#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, n;
    cin >> t;
    long long a, b;
    while(t--){
        cin >> a >> b >> n;
        long long arr[n], seconds = 0;
        for(int i = 0; i<n; i++){
            cin >> arr[i];
            if(arr[i]<a){
                b+=arr[i];
            }
            else{
                b += a-1;
            }
        }
        cout << b << endl;
    }

    return 0;
}