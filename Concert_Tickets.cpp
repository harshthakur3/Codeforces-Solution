#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    vector<int> tickets(n), customer(m);
    for(int i = 0; i < n; i++){
        cin >> tickets[i];
    }
    for(int i = 0; i < m; i++){
        cin >> customer[i];
    }
    sort(tickets.begin(), tickets.end());
    sort(customer.begin(), customer.end());
    map<int, int> mp;
    int i = 0, j = 0;
    while(i < n && j < m){
        if()
    }
}