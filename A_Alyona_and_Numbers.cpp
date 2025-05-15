#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n, m;
    cin >> n >> m;
    long long int count = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if((i + j)%5 == 0){ 
                count++;
                count=count+(m-j)/5;
                break;
            }
        }
    }
    cout << count;
}