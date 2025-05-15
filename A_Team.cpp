#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int count = 0;
    while(n--){
        int sum = 0;
        for(int i = 0; i < 3 ; i++){
            int x;
            cin >> x;
            sum += x;
        }
        if(sum > 1) count++;
    }
    cout << count;
}