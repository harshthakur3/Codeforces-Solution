#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        string s;
        cin>>s;
       int x=0,y=0;
       bool flag = false;
      for(int i=0;i<=100;i++){
        char move =s[i%n];
        if(move =='N') y++;
        else if(move =='E') x++;
         else  if(move =='S') y--;
         else   if(move =='W') x--;
         if(x==a && y==b){
            flag =true;
            break;
        }
      }
      
        if(flag) cout<<"YES"<<endl;
         else cout<<"NO"<<endl;
    }
}