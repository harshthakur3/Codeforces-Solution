#include<bits/stdc++.h>
using namespace std;
int main(){
    string a, b;
    cin >> a >> b;
    int c = a.size();
    int d = b.size();
    int n = c/d;
    if(n == c){
        cout << "No";
        return 0;
    }
    int e = n - 1;
    bool flag = 1;
    for(int i = 0 ; i  < d ; i++){
        if(a[e] == b[i]){
            e = e + n;
        }
        else {
            flag = 0;
        }
    }
    if(flag){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
}