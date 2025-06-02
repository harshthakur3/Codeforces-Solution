#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a = n;
        int b = n;
        int p = 0, q = 0;
        while(a){
            int x = a%10;
            a = a/10;
            p++;
            if(x == 5){
                break;
            }
        }
        while(a){
            int x = a%10;
            a = a/10;
            p++;
            if(x == 2 || x == 7){
                break;
            }
        }
        while(b){
            int x = b%10;
            b = b/10;
            q++;
            if(x == 0){
                break;
            }
        }
        while(b){
            int x = b%10;
            b = b/10;
            q++;
            if(x == 0 || x == 5){
                break;
            }
        }

        cout << min(p,q) - 2 << endl;
    }
}