#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
int n,s;
cin>>n>>s;
vector<int> v(n);
int cnt0 = 0, cnt1 = 0, cnt2 = 0;
for(auto &val:v){
    cin>>val;
    if(val == 0){
        cnt0++;
    }
    else if(val == 1){
        cnt1++;
    }
    else{
        cnt2++;
    }
}
int sum = accumulate(v.begin(),v.end(), 0);
if(s < sum){
    for(auto &val:v){
        cout<<val<<" ";
    }
    cout<<endl;
}
else if(s == sum){
    cout<<-1<<endl;
}
else if(s == sum + 1){
    while(cnt0){
        cout<<0<<" ";
        cnt0--;
    }
    while(cnt2){
        cout<<2<<" ";
        cnt2--;
    }
    while(cnt1){
        cout<<1<<" ";
        cnt1--;
    }
    cout<<endl;
}
else{
    cout<<-1<<endl;
}
}
int main(){
int t;
cin>>t;
while(t--){
    solve();
}

}