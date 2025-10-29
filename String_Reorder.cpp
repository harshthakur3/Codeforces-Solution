#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    sort(s.begin() , s.end());
    int n = s.size();
    int  j = 0;
    string temp = s;
    for(int i = 0; i < n; i += 2){
        temp[i] = s[j];
        j++;
    }
    for(int i = 1; i < n; i += 2){
        temp[i] = s[j];
        j++;
    }

    for(auto it : temp){
        cout << it;
    }

}