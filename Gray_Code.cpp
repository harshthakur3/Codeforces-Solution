#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<string> gray;
    gray.push_back("0");
    gray.push_back("1");
    for(int i = 2; i <= n; i++){
        int size = i;
        for(int j = size - 1; j >= 0; j--){
            gray.push_back(gray[j]);
        }

        for(int j = 0; j < size; j++){
            gray[j] = "0" + gray[j];
            gray[j + size] = "1" + gray[j + size];
        }
    }

    for(auto it : gray){
        cout << it << endl;
    }
}