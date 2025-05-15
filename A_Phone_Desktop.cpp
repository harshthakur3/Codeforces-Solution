#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        int page = (y + 1)/2;
        int page1 = 0;
        if(y%2 == 0){
            page1 = page*7;
        }
        else{
            page1 = page*7 + 4;
        }
        if(x <= page1){
            cout << page << endl;
        }
        else {
            cout << page + (x - page1 + 14)/15 << endl;
        }
    }
}