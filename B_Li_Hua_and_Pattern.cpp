#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int a[n][n];
        for(int i =0;i<n;++i){
            for(int j=0;j<n;++j){
                cin >> a[i][j];
            }
        } 
        int count=0;
        for(int i =n-1;i>=0;--i){
            for(int j=n-1;j>=0;--j){
                if(a[n-i-1][n-j-1]!=a[i][j])count++;
            }
        }
        count/=2;
        if(( n%2==1||((k-count)%2==0)) && (count<=k) ) cout << "YES" << endl;
        else cout << "NO" << endl;
}}