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

		vector<int>v(n);

		for(int i=0; i<n; i++){
			if(s[i]==')'){
				v[i]=-1;
			}else{
				v[i]=1;
			}
			if(i>0){
				v[i]+=v[i-1];
			}
		}
        if(v[n-1]!=0){
        	cout<<-1<<"\n";
        	continue;
        }
		vector<int>ans(n);
		for(int i=0; i<n; i++){
			if(v[i]>0){
				ans[i]=2;
			}else if(v[i]<0){
				ans[i]=1;
			}else{
				ans[i]=ans[i-1];
			}
		}

		int cnt=count(ans.begin(),ans.end(),2);

		if(cnt==0 or cnt==n){
			cout<<1<<"\n";
			for(int i=0; i<n; i++){
                cout<<1<<" ";
			}
			cout<<"\n";
		}else{
			cout<<2<<"\n";
			for(int i=0; i<n; i++){
				cout<<ans[i]<<" ";
			}
			cout<<"\n";
		}

	}
	
	return 0;
}
