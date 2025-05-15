#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        map<char,int> mp;
        for(int i = 0; i < s.size(); i++){
            mp[s[i]]++;
        }
        int maxi = - 1;
        for(auto it : mp){
            maxi = max(maxi, it.second);
        }
        if(maxi <= s.size()/2 && s.size()%2 == 0){
            cout << 0 << endl;
        }
        else if(maxi > s.size()/2 && s.size()%2 == 0){
            cout << maxi - (s.size() - maxi) << endl;
        }
        else if(maxi <= s.size()/2 + 1 && s.size()%2 == 1){
            cout << 1 << endl;
        }
        else{
            cout << maxi - (s.size() - maxi) << endl;
        }
    }
}