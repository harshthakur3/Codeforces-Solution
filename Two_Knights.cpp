#include <iostream>
using namespace std;
// Function to calculate and print the number of ways two
// knights can be placed on a K X K chessboard such that
// they do not attack each other
long calculateWays(int K) {
    long totalWays = ((long) K * K * (K * K - 1)) / 2;
    long attackingWays = 4 * (K - 1) * (K - 2);
    long ans = totalWays - attackingWays;
    return ans;
}
int main() {
    int N;
    cin >> N;
    for (int K = 1; K <= N; K++) {
        cout << calculateWays(K) << " " << endl;
    }

    return 0;
}
