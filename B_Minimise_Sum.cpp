#include <bits/stdc++.h>
using namespace std;

void solution() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int &i : a) cin >> i;
	if (a[1] > a[0]) cout << a[0] * 2;
	else cout << a[0] + a[1];
}

int main(){
	int t;
	cin >> t;
	while (t--) {
		solution();
		cout << '\n';
	}
	return 0;
}