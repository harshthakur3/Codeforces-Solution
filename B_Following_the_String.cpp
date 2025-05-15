    #include <bits/stdc++.h>
    using namespace std;
    int main(){
        int t;
        cin >> t;
        for(int i=0;i<t;++i){
            int n;
            cin >> n;
            int arr[n];
            string s="abcdefghijklmnopqrstuvwxyz";
            for(int j=0;j<n;++j){
                cin >> arr[j];   
            }
            int hash[200001]={0};
            for(int j=0;j<n;++j){
                hash[arr[j]]++;
                cout << s[hash[arr[j]]-1];
            }
            cout << endl;
        }
    }