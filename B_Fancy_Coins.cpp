#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int m, k , no, nk;
        cin >> m >> k >> no >> nk;
        int k_needed = m/k;
        int one_needed = m%k;
        int count = 0;
        if(one_needed <= no){
            no -= one_needed;
        }
        else{
            count += one_needed - no;
        }
        
        nk += no/k;
        if(k_needed <= nk){

        }
        else{
            count += k_needed - nk;
        }
        cout << count << endl;
    }
}