#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        int two = 0, three = 0;
        while(n%2 == 0){
            n = n/2;
            two++;
        }
        while(n%3 == 0){
            n = n/3;
            three++;
        }
        if(n != 1)cout << -1 << endl;
        else if(two > three) cout << -1 << endl;
        else cout <<  2*three - two << endl;
    }
}