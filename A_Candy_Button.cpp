#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, c;
    cin >> n >> c;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    long long candies = 1, last = v[0];
    for(int i = 1; i < n; i++){
        if(v[i] - last < c){
            continue;
        }
        else{
            last = v[i];
            candies++;
        }
    }
    cout << candies;
}