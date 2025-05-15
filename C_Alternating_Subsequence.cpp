#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n ; i++){
            cin >> a[i];
        }
        int maxi = INT_MIN;
        vector<int> v;
        if(a[0] < 0 && a[1] > 0){
            v.push_back(a[0]);
            maxi = max(maxi, a[1]);
        }
        else if(a[0] > 0 && a[1] < 0){
            v.push_back(a[0]);
            maxi = max(maxi, a[1]);
        }
        else if(a[0] < 0 && a[1] < 0){
            maxi = max(a[0], a[1]);
        }
        else if(a[0] > 0 && a[1] > 0){
            maxi = max(a[0], a[1]);
        }


        for(int i = 1; i < n - 1 ; i++){
            if(a[i] < 0 && a[i + 1] > 0){
            v.push_back(maxi);
            maxi = a[i + 1];
            }
            else if(a[i] > 0 && a[i + 1] < 0){
            v.push_back(maxi);
            maxi = a[i + 1];
            }
            else if(a[i] > 0 && a[i + 1] > 0){
            maxi = max(maxi, a[i + 1]);
            }
            else if(a[i] < 0 && a[i + 1] < 0){
            maxi = max(maxi, a[i + 1]);
            }
        }
        v.push_back(maxi);
        long long int sum = 0;
        for(int i = 0; i < v.size(); i++){
            sum = sum + v[i];
        }
        if(n == 1) cout << a[0] << endl;
        else{
            cout << sum << endl;
        }
    }
}