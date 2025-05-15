#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int a[n];
	    for(int i = 0; i < n; i++){
	        cin >> a[i];
	    }
	    int b[n] = {0};
	    for(int i = 0; i < n; i++){
	        b[a[i] - 1] = b[a[i] - 1] + 1;
	    }
	    int s[n];
	    int sum = 0;
	    for(int i = 0; i < n; i++){
	        sum += b[i];
	        s[i] = sum;
	    }
	    bool flag = false;
	    for(int i = 0; i < n; i++){
	        if(i + 1 > s[i]){
	            flag = true;
	        }
	    }
	    if(flag){
	        cout << "NO" << endl;
	    }
	    else{
	        cout << "YES" << endl;
	    }
	
	}

}
