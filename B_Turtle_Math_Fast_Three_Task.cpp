#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        int sum = 0;
        for(int i = 0; i < n; ++i){
            cin >> a[i];
            sum = sum + a[i];
        }
        int count = 0;
        for(int i = 0; i < n ; ++i){
            if(sum%3 == 0) break;
            else if((sum - a[i])%3 == 0){
                count++;
                break;
            }
            
        }
        if(count == 0){
            if((sum + 1)%3 == 0) count = 1;
            else if((sum + 2)%3 == 0) count = 2;
        }
        
        cout << count << endl;
        
    }
    return 0;
}
