#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string a;
        cin >> a;
        
        int coin = 0;
        for(int i = 0; i < n ; ++i){
                if(a[i] == '@') coin++;
                else if(a[i] == '*' && a[i + 1] == '*') break;
        }
        cout << coin << endl;
    }
}
