#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n][n];
		for(int i=0; i<n; i++){
			string s;
			cin>>s;
			for(int j=0; j<n; j++){
				a[i][j]=s[j]-'0';
			}
		}

		int ans=0;
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				int one=0,zero=0;

				if(a[i][j]==1) one++;
                else zero++;
                if(a[n-j-1][i]==1) one++;
                else zero++;
                if(a[n-i-1][n-j-1]) one++;
                else zero++;
                if(a[j][n-i-1]) one++;
                else zero++;
                ans+=min(one,zero);
			}
		}
		cout<<ans/4<<"\n";

	}
	
	return 0;
}
