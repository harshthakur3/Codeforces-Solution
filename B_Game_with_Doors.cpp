#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long int l , r , L , R;
        cin >> l >> r >> L >> R;
        if(r < L && l < r && R > L){
            cout << 1 << endl;
        }
        else if(r == L && l < r && L < R){
            cout << 2 << endl;
        }
        else if((l > L && r < R) || (L > l && R < r)){
            cout << min(abs(l - r), abs(L - R)) + 2;
        }
        else if(l == L && r == R){
            cout << abs(l - r) << endl;
        }
        else if( R < l && L < R && r > l){
            cout << 1 << endl;
        }
        else if(l < r && L < R && L < r){
            cout << r - L + 1 << endl;
        }
        else if(l < r && L < R && l < R){
            cout << R - l + 1 << endl;
        }
        else if(L > l && R == r){
            cout << R - L + 1<< endl;
        }
        else if(L == l && R < r){
            cout << R - L + 1 << endl;
        }
        else if(l > L && R == r){
            cout << R - L + 1<< endl;
        }
        else if(L == l && r < R){
            cout << R - L + 1 << endl;
        }
    }
}