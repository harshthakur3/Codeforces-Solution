#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n, m, k;
        cin >> n >> m >> k;
        int temp;
        if(k%n==0) temp=k/n;
        else temp=k/n+1;
        int diff=m-temp;
        cout<<m/(diff+1)<<endl;
    }
}