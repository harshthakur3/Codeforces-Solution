#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        string s1 = s;
        reverse(s1.begin(), s1.end());
        if(s1 >= s){
            cout << s << endl;
        }
        else{
            s1 = s1 + s;
            cout << s1 << endl;
        }

    }
}