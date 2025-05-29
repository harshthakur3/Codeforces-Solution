#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        bool flag = false;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(__gcd(a[i], a[j]) <= 2){
                    flag = true;
                    break;
                }
            }
            if(flag) break;
        }
        if(flag) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}
