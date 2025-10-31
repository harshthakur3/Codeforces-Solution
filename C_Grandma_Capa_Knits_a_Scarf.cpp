#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
        vector<int>v(27);
        v[0]=n+1;
		for(char a='a'; a<='z'; a++){
			int l=0,r=n-1;
			while(l<=r){
				if(s[l]==s[r]){
					l++;
					r--;
				}else{
					if(s[l]!=a and s[r]!=a){
						v[a-'a'+1]=n+1;
                        break;
						
					}else{
						v[a-'a'+1]++;
                        if(s[l]==a){
                            l++;
                        }else{
                            r--;
                        }
					}
				}
			}
		}
       int mn=INT_MAX;
	   for(auto x:v){
	   	mn=min(mn,x);
	   }
       cout<<(mn==n+1?-1:mn)<<"\n";
	}
	
	return 0;
}
