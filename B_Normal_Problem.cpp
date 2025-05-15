#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        vector<char> c;
        for(int i = s.size() - 1; i >= 0; i--){
            if(s[i] == 'p') c.push_back('q');
            else if(s[i] == 'q') c.push_back('p');
            else c.push_back('w');
        }
        for(int i = 0; i < c.size() ; i++){
            cout << c[i];
        }
        cout << endl;

    }
}