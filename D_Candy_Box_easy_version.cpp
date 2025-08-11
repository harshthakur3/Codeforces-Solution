#include <bits/stdc++.h>
using namespace std;
int32_t main(){
int T;
cin >> T;
while(T--){
    int n,ans=0;
    cin >> n;
    map<int,int> m;
    for(int i=0;i<n;i++){
        int k;
        cin >> k;
        m[k]++;
    }
    vector<int> an;
    for(auto x:m) an.push_back(x.second);
    sort(an.rbegin(),an.rend());
    int add=an[0];
    for(int i=0;i<an.size();i++){
        if((min(add,an[i]))==0) break;
        if(add>an[i]){
            ans+=an[i];
            add=an[i]-1;
        }
        else{
            ans+=add;
            add--;
        }
    }
    cout << ans << endl;
}
return 0;
}