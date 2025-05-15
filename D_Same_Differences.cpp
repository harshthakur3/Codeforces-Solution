#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int num;
        long long int count = 0;
        unordered_map<int,int>mpp;
        for(int i = 0; i < n; i++){
            cin >> num;
            count+=mpp[num-i]++;
        }
        cout << count << endl;
    }
}