#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n; 
	vector<int64_t> a(n);

	for(int i = 0; i < n; ++i) cin >> a[i];
    int64_t hcf1 = a[0], hcf2 = a[1];

    for(int i = 0; i < n; i += 2) hcf1 = gcd(hcf1, a[i]);
    for(int i = 1; i < n; i += 2) hcf2 = gcd(hcf2, a[i]);

    bool chk = 1;
    for(int i = 1; i < n; i += 2) {
        if(a[i] % hcf1 == 0) {
        	chk = 0;
        	break;
        }
    }

    if(!chk) {
        chk = 1;
        for(int64_t i = 0; i < n; i += 2) {
            if(a[i] % hcf2 == 0)
            chk = 0;
        }
        if(chk) cout << hcf2;
        else cout << 0;
    } else cout << hcf1;

}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t = 1; 
	cin >> t;
	while(t--) {
		solve();
		cout << "\n";
	}
} 
