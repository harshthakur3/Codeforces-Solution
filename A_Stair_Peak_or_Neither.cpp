#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        if(b > a){
            if(c > b){
                cout << "STAIR" << endl;
            }
            else if(c < b){
                cout << "PEAK" << endl;
            }
            else cout << "NONE" << endl;
        }
        else cout << "NONE" << endl;
        
    }
}