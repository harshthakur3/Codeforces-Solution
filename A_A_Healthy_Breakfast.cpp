#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int a , b;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'R'){
            a = i;
            break;
        }
    }
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'M'){
            b = i;
            break;
        }
    }
    if(a < b){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
}
