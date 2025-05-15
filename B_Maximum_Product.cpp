#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        vector<long long>v(n);
        for(long long int i=0;i<n;++i){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        long long temp=v[n-5]*v[n-4]*v[n-3]*v[n-2]*v[n-1];
        long long a=v[0]*v[1]*v[2]*v[3]*v[n-1];
        long long b=v[0]*v[1]*v[n-3]*v[n-2]*v[n-1];
        cout<<max(temp,max(a,b))<<endl;     
    }
}