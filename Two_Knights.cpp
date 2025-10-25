#include <iostream>
using namespace std;
#define int long long
// pehle ye dekho total ways kya hai knight ko position krne ke chess board me
// fir ye socho in a given chess board kitne condition bante jab knight ek dusre ko attack krta
signed main() {
    int N;
    cin >> N;
    for (int K = 1; K <= N; K++) {
        int k = K;
        cout << k*k*(k*k - 1)/2 - 4*(k - 1)*(k - 2) << endl;
    }
    return 0;
}
