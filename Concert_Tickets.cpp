// #include<bits/stdc++.h>
// using namespace std;
// #define int long long

// signed main(){
//     int n, m;
//     cin >> n >> m;
//     vector<int> cost(n), customer(m);
//     for(int i = 0; i < n; i++){
//         cin >> cost[i];
//     }
//     for(int i = 0; i < m; i++){
//         cin >> customer[i];
//     }
//     vector<int> temp = customer;
//     sort(cost.rbegin(), cost.rend());
//     sort(temp.rbegin(), temp.rend());
//     vector<int> mp(10e6, -1);
//     int i = 0, j = 0;
    
//     while(j < m && i < n){
//         if(temp[j] >= cost[i]){
//             mp[temp[j]] = cost[i];
//             j++;
//             i++;
//         }
//         else{
//             i++;
//         }
//     }
//     for(int i = 0; i < m; i++){
//         cout << mp[customer[i]] << endl;
//     }
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, m;
    cin >> n >> m;

    multiset<long long, greater<long long>> tickets;
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        tickets.insert(x);
    }

    vector<long long> customers(m);
    for (int i = 0; i < m; i++) {
        cin >> customers[i];
    }

    for (long long price : customers) {
        auto it = tickets.lower_bound(price);
        if (it == tickets.end()) {
            cout << -1 << '\n';
        } else {
            cout << *it << '\n';
            tickets.erase(it);
        }
    }
}
