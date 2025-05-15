#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long int x, y, z, k;
        cin >> x >> y >> z >> k;
        long long ans = 0;
        for(int i = 1 ; i <= x && i <= k; i++){
            for(int j = 1; j <= y && i*j <= k; j++){
                long long int a = k/(i*j);
                if(i*j*a == k){
                    ans = max(ans, (x - i + 1)*(y - j + 1)*(z - a + 1));
                    //ans = abs((x - i + 1)*(y - j + 1)*(z - a + 1));
                }
            }
        }
        cout << ans << endl;
    }
}