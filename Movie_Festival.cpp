#include<bits/stdc++.h>
using namespace std;
#define int long long

bool compare(pair<int, int> a, pair<int, int> b) {
    return a.second < b.second;
}

signed main(){
    int n;
    cin >> n;
    vector<pair<int,int>> movies(n);
    for(int i = 0; i < n; i++){
        cin >> movies[i].first >> movies[i].second;
    }
    sort(movies.begin(), movies.end(), compare);
    int count = 0;
    int last = 0;
    for(int i = 0; i < n; i++){
        if(movies[i].first >= last){
            count++;
            last = movies[i].second;
        }
    }
    cout << count << endl;
}