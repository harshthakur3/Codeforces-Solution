#include<bits/stdc++.h>
using namespace std;
void solve(int x1, int y1){
    for(;;){
            if(x1%2 != 0){
                break;
            }
            else{
                x1 >>= 1;
                y1 <<= 1;
            }
        }
        cout << y1 << endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int x, y;
        cin >> x >> y;
        int x1, y1;
        x1 = x^y;
        y1 = 1;
        solve(x1,y1);
    }
}