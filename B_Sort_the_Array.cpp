#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int v[n];
    for(int i = 0; i < n ; i++){
        cin >> v[i];
    }
    bool flag = 0;
    int l = 0, r = 0;
    for(int i = 1; i < n; i++){
        if(flag == 0 && v[i] < v[i - 1]){
            flag = 1;
            l = i - 1;
            r = i;
        }
        else if(flag == 1 && v[i] < v[i - 1]){
            r = i;
        }
    }
    sort(v + l, v + r + 1);
    bool check = 1;
    for(int i = 1; i < n ; i++){
        if(v[i] < v[i - 1]){
            check = 0;
            break;
        }
    }
    l++;
    r++;
    if(check){
        cout << "yes" << endl;
        cout << l << " " << r;
    }
    else{
        cout << "no";
    }
}