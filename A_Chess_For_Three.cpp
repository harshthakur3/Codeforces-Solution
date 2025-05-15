#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n ; i++){
            cin >> a[i];
            if(a[i] > 3){
                a[i] = a[i]%3;
            }
        }
        int one = 0, two = 0, three = 0;
        for(int i = 0; i < n; i++){
            if(a[i] == 1) one ++;
            else if(a[i] == 2) two++;
            else three++;
            
        } 
        int ans = three;
        if(two <= one){
            ans = ans + two;
            one = one - two;
            ans = ans + one/3;
        }
        else{
            ans = ans + one;
        }
        cout << ans << endl;
    }
}