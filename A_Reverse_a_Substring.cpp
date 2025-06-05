#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool flag = true;
    int p;
    for(int i = 0; i < n - 1; i++){
        if(s[i] > s[i + 1]){
            flag = false;
            p = i;
            break;
        }
    }
    if(flag){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
        cout << p + 1 << " " << p + 2 << endl;
    }
}