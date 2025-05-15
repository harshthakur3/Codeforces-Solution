#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v;
    int e = 0, o = 0;
    for(int i = 0; i < n ; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    for(int i = 0; i < n ; i++){
        if(v[i] %2 == 0) e++;
        else o++;
    }
    int j;
    if(e == 1){
        for( j = 0; j < n; j++){
            if(v[j] %2 == 0){
                break;
            }
        }
    }
    else{
        for( j = 0; j < n; j++){
            if(v[j] %2 != 0){
                break;
            }
        }
    }
    cout << j + 1;
}