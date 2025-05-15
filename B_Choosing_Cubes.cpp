#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,f,k;
        cin>>n>>f>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int vl=a[f-1];
        sort (a,a+n,greater<int>());
        bool flag1=false;
        bool flag2 =false;
        if(n==f && f==k) cout<<"YES"<<endl;
        else{
            for(int i=0;i<k;i++){
                if(a[i]==vl) flag1=true;
                
            }
            for(int i=k;i<n;i++){
                if(a[i]==vl) flag2 =true;
                }
            if(flag1==true && flag2==true) cout<<"MAYBE"<<endl;
            else if(flag1==true && flag2==false) cout<<"YES"<<endl;
            else if(flag2==true && flag1==false)cout<<"NO"<<endl;
        }
    }
}