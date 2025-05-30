#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long int a[n],min = 0;
        for(int i=0;i<n;i++){
          cin >> a[i];
        }
        min = a[1] - a[0]; 
        for(int i=1;i<n-1;i++){
          if(a[i+1]-a[i]<min){
            min = a[i+1]-a[i];
          }
        }     
        if(min<0) cout << 0 <<"\n";
        else cout << min/2+1 <<"\n";   
        
    }
}