#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    vector<char>c;
    for(int i = 0; i < s.size() ; ++i){
        if(s[i] == 'a' ||s[i] == 'e' ||s[i] == 'i' ||s[i] == 'o' ||s[i] == 'u' ||
         s[i] == 'A' ||s[i] == 'E' ||s[i] == 'I' ||s[i] == 'O' ||s[i] == 'U' ||s[i] == 'y' ||s[i] == 'Y'){
            continue;
        }
        if(s[i]>=65 && s[i]<=90){
            s[i]+=32;
            
        }
        c.push_back(s[i]);
    }
    for(int i = 0; i < c.size() ; ++i){
        cout << "." << c[i];
    }
}