#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
#define INF(t) numeric_limits<t>::max()

int main() {
	ios_base::sync_with_stdio(false); cin.tie(0);

	int tc; cin >> tc;
	while(tc--) {
		int n; cin >> n;
		vector<int> a(n);
		for(auto &x : a) cin >> x;

		set<int> prev, total;
		int part_cnt = 0;
		for(int i = 0; i < n; i++) {
			total.insert(a[i]);
			if(prev.count(a[i])) {
				prev.erase(a[i]);
			}
			if(prev.size() == 0) {
				part_cnt++;
				prev = total;
			}
		}

		cout << part_cnt << "\n";
	}

	return 0;
}