#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,r;
        cin >> n >> r;
        vector<int> v(n);
        int happy = 0, alone = 0;
        for(int i = 0; i < n; i ++){
            cin >> v[i];
            happy += v[i] - v[i]%2;
            alone += v[i]%2;
        }
        r -= happy/2;
        if(r >= alone){
            happy += alone;
        }
        else{
            happy += 2*r - alone;
        }
        cout << happy << endl;
    }
}