#include <bits/stdc++.h>
using namespace std;
// #define int long long

int main(){
    string s;
    cin >> s;
    unordered_map<char, int>mp;
    int n = s.size();
    for(int i = 0; i < n; i++){
        mp[s[i]]++;
    }
    int odd_count = 0;
    for(auto it : mp){
        if(it.second%2 == 1){
            odd_count++;
        }
    }
    if(odd_count > 1){
        cout << "NO SOLUTION";
    }
    else if(odd_count == 0){
        vector<char> v;
        for(auto it : mp){
            int temp = it.second/2;
            while(temp--){
                v.push_back(it.first);
            }
        }
        for(int i = 0; i < v.size(); i++){
            cout << v[i];
        }
        reverse(v.begin(), v.end());
        for(int i = 0; i < v.size(); i++){
            cout << v[i];
        }
        
    }
    else{
        char hola;
        for(auto it : mp){
            if(it.second%2 == 1){
                it.second--;
                hola = it.first;
                break;
            }
        }
        vector<char> v;
        for(auto it : mp){
            int temp = it.second/2;
            while(temp--){
                v.push_back(it.first);
            }
        }
        for(int i = 0; i < v.size(); i++){
            cout << v[i];
        }
        cout << hola;
        reverse(v.begin(), v.end());
        for(int i = 0; i < v.size(); i++){
            cout << v[i];
        }
    }
}