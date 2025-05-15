#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[n];
	    for(int i = 0; i < n; i++){
	        cin >> a[i];
	    }
	    for(int i = 0; i < n; i++){
	        cin >> b[i];
	    }
	    int a1[m + 1] = {0}, b1[m + 1] = {0};
        for(int i = 0; i < n ; i++){
            a1[m - a[i]%m]++;
        }
        for(int i = 0; i < n ; i++){
            b1[m - b[i]%m]++;
        }
        int o = 0, tw = 0, th = 0, f = 0, fi = 0, o1 = 0, tw1 = 0, th1 = 0, f1 = 0, fi1 = 0;
        for(int i = 0; i < n; i++){
            if(a[i] == 1) o++;
            else if(a[i] == 2) tw++;
            else if(a[i] == 3) th++;
            else if(a[i] == 4) f++;
            else fi++;
        } 
        for(int i = 0; i < n; i++){
            if(b[i] == 1) o1++;
            else if(b[i] == 2) tw1++;
            else if(b[i] == 3) th1++;
            else if(b[i] == 4) f1++;
            else fi1++;
        }
        int ans = o*f1 + tw*th1 + th*tw1 + f*o1 + fi*fi1;
        cout << ans << endl; 
        
	}

}
