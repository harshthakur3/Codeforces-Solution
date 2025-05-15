#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    int maxx = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        maxx = max(a[i], maxx);
    }
    int sum = 0;
    for(int i = 0; i < n; i++){
        
        sum = sum + maxx - a[i];
    }
    if(n == 1) cout << 0;
    else {
        cout << sum;
    }
}
