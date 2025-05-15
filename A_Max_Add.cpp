#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n), pre(n);
    int large = 0;
    for(int  i = 0; i < n; i++){
        cin >> v[i];
        if(v[i] > large){
            large = v[i];
            pre[i] = large;
        }
    }
    for(int k = 1; k <= n; k++){
        int sum 
    }
}