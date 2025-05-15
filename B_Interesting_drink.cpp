#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int t;
    cin >> t;
    int mid = 0, pos = -1;
    while(t--){
        pos = -1;
        int x;
        cin >> x;
        int start = 0, end = n - 1;
        while(start <= end){
            mid = start + (end - start)/2;
            if(a[mid] == x){
                pos = mid;
                start = mid + 1;
            }
            else if(a[mid] > x){
                end = mid - 1;
            }
            else{
                start = mid + 1;
                pos = mid;
            }
        }
        if(pos == -1){
            cout << 0 << endl;
        }
        else{
            cout << pos + 1  << endl;
        }
        
    }
}