#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(n <= 3){
        cout << s;
    }
    else if(n%2 == 0){
        for(int i = 0 ; i < s.size(); i++){
            if(i%2 == 0 && i > 0){
                cout << '-' << s[i];
            }
            else{
                cout << s[i];
            }
        }
    }
    else{
        cout << s[0] << s[1] << s[2] << "-";
        for(int i = 3 ; i < s.size(); i++){
            if(i%2 == 0 && i > 0 && i < s.size() - 1){
                cout  << s[i] <<  '-';
            }
            else{
                cout << s[i];
            }
        }
    }
}