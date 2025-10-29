#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n,m,c;
    if(!(cin>>n>>m>>c)) return 0;
    unordered_map<long long,long long> mp;
    for(long long i=0;i<n;i++){ long long a; cin>>a; mp[a]++; }
    vector<long long> p;
    for(auto &kv:mp) p.push_back(kv.first);
    sort(p.begin(),p.end());
    int k=p.size();
    vector<long long> cnt(k);
    for(int i=0;i<k;i++) cnt[i]=mp[p[i]];
    vector<long long> pref(2*k+1,0);
    for(int i=0;i<2*k;i++) pref[i+1]=pref[i]+cnt[i%k];
    long long ans=0;
    int r=0;
    for(int j=0;j<k;j++){
        if(r<j) r=j;
        while(r<j+k && pref[r+1]-pref[j]<c) r++;
        long long s=pref[r+1]-pref[j];
        long long prev=p[(j-1+k)%k];
        long long gap=p[j]-prev;
        if(gap<=0) gap+=m;
        ans += gap * s;
    }
    cout<<ans<<"\n";
    return 0;
}
