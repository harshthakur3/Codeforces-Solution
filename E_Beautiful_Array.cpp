#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int mean, median;
    cin >> mean >> median;
    if(mean == median){
        cout << 1 << endl;
        cout << mean << endl;
    }
    else{
        cout << 3 << endl;
        cout << median << " " << median << " " << 3*mean - (median + median) << endl;
    }
}