#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
    string s;
    cin >> s;
    vector<pair<char, int>> v;
    string temp = s;
    reverse(temp.begin(), temp.end());
    if(s == temp) cout << 0;
    else{
        if(s[0] == s[2]){
            cout << 2 << endl;
            cout << "R" << " " << 2 << endl;
            cout << "R" << " " << s.size() - 2 + s.size() - 1 << endl;
        }
        else if(s[s.size() - 1] == s[s.size() - 3]){
            cout << 2 << endl;
            cout << "L" << " " << s.size() - 1 << endl;
            cout << "L" << " " << 2 << endl;
        }
        else{
            cout << 3 << endl;
            cout << "R" << " " << s.size() - 1 << endl;
            cout << "L" << " " << s.size() << endl;
            cout << "L" << " " << 2 << endl;
        }
    }
}