#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int ans = 0;
        vector<int> v(n);
        int a = 0, b = 0;
        for(int i = 0; i < n; i++){
            cin >> v[i];
            if(v[i] == 1){
                a++;
            }
            else{
                b++;
            }
        }
        if(b > a){
            int c = b - a;
            ans = ceil((double)c / 2);

            //cout << ans << "  ";
            b -= ans;
            a += ans;
        }

        if(b%2 == 1){
            ans++;
        }
        cout << ans << endl;
    }
}