#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a[7] = {0};
        int n, count;
        cin >> n >> count;
        string s;
        cin >> s;
        for(int i = 0; i < n; i++){
            if(s[i] == 'A') a[0]++;
            else if(s[i] == 'B') a[1]++;
            else if(s[i] == 'C') a[2]++;
            else if(s[i] == 'D') a[3]++;
            else if(s[i] == 'E') a[4]++;
            else if(s[i] == 'F') a[5]++;
            else if(s[i] == 'G') a[6]++;
        }
        int ans = 0;
        for(int i = 0; i < 7; i++){
            if(a[i] < count){
                ans += count - a[i];
            }
        }
        cout << ans << endl;

    }
}
