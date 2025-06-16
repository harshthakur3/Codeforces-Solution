#include <iostream>

using namespace std;
typedef long long int ll;

int main() {
	int t;
	cin >> t;
	while (t--) {
		char c;
		int score = 0;
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				cin >> c;
				if (c == 'X') {
					score += 5 - (int)(max(abs(4.5 - i), abs(4.5 - j)));
				}
			}
		}
		cout << score << endl;
	}
	return 0;
}
