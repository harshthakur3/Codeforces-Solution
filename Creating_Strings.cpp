#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    set<string> k;
    sort(s.begin(), s.end());
    k.insert(s);
    while(next_permutation(s.begin(), s.end())){
        k.insert(s);
    }
    cout << k.size() << endl;
    for(auto it : k){
        cout << it << endl;
    }
}