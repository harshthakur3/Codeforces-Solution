#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long x,n;
        cin>>x>>n;
       long long  m = n%4;
       if(x%2==0){
        if(m==0)  cout<<x<<endl;
       else if(m==1)  cout<<x-n<<endl;
       else if(m==2)  cout<<x+1<<endl;
       else if(m==3)  cout<<x+1+n<<endl;

       }
       else{
        if(m==0) cout<<x<<endl;
        else if(m==1) cout<<x+n<<endl;
        else if(m==2) cout<<x-1<<endl;
        else if(m==3) cout<<x-1-n<<endl;
       }

    }
}