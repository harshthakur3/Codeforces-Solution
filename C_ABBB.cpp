#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s;
        cin >> s;
        
        int nn = s.length();
        for (int i = 0; i < s.length() - 1; ) {
            if ((s[i] == 'A' && s[i + 1] == 'B') || (s[i] == 'B' && s[i + 1] == 'B')) {
                s.erase(i, 2);
                i = 0;
                // No need to increment i here, as erasing two characters already moves i ahead
            } else {
                i++; // Move to the next character
            }
        }
        
        cout << s << " " << s.length() << endl;
}
int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string s;
        cin >> s;
        vector<char> v;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == 'B' && v.size() != 0){
                v.pop_back();
            }
            else{
                v.push_back(s[i]);
            }
        }
        cout << v.size() << endl;
    }

    return 0;
}
