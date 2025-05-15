//What you looking for o_O
//Charm*100(Accept this code, CF bich)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int test=1;
    while(t--){

       int n,l,r;
       cin >> n >> l >> r;
       vector<int> v(n+1);
       int check=1;
      for(int i=n;i>=1;--i){
        if(l%i==0){
            v[i]=l;
            continue;
        }
        v[i]=l+(i-(l%i));
        if(v[i]>r){
            check=0;
            break;
        }
      }
      if(!check){
        cout << "NO" << endl;
        continue;
      }
      cout << "YES" << endl;
      for(int i=1;i<=n;++i){
        cout << v[i] << " ";
      }
      cout << endl;
    }
}