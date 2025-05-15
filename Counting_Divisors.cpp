#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        int count = 0;
        cin >> n;
        for(int i = 1 ; i <= sqrt(n) ; i++){
            if(n%i == 0){
                count++;
            }
        }
        cout << count*2 << endl;
    }
}