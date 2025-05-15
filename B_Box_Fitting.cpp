#include <bits/stdc++.h>
using namespace std;
#define int long long
void space(){
    int n,W;
        cin>>n>>W;
        multiset<int>st;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            st.insert(x);
        }
        int ans=1;
        int space=W;
        while(st.empty()==false){
            auto it=st.upper_bound(space);
            if(it!=st.begin()){
                it--;
                space=space-*it;
                st.erase(it);
            }
            else{
                space=W;
                ans++;
            }
        }
        cout<<ans<<endl;
}

void sintu(){
    int n, W;
    cin >> n >> W;
    vector<int> w(n);
    for(int i = 0; i < n; i++){
        cin >> w[i];
    }
    sort(w.begin(), w.end());
    priority_queue<int> pq;
    int ans = 0;
    for(int i = n - 1; i >= 0; i--){
        if(pq.empty() || pq.top() < w[i]){
            ans++;
            pq.push(W - w[i]);
        }
        else{
            int x = pq.top();
            pq.pop();
            pq.push(x - w[i]);
        }
    }
    cout << ans << endl;
}
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        sintu(); // sintu's solution orzz 
    }
    return 0;
}