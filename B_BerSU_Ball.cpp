#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int k;
    cin >> k;
    vector<int> b(k);
    for(int i = 0; i < k; i++){
        cin >> b[i];
    }
    int count = 0;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for(int i = 0; i < n; i++){
        for(int j = 0; j < k; j++){
            if(abs(a[i] - b[j]) < 2){
                count++;
                b[j] = 102;
                break;
            }
        }
    }
    cout << count << endl;
}