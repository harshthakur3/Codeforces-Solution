#include <bits/stdc++.h>
#include <sys/time.h>
using namespace std;

// Current time microseconds mein return karta hai (debug ke liye)
long long t() {
    struct timeval v;
    gettimeofday(&v, nullptr);
    return (long long)v.tv_sec * 1000000LL + v.tv_usec;
}

// Rectangle [a..b] x [c..d] mein kitna gold hai, yeh calculate karta hai
// Bounds ko grid ke andar limit karta hai
int q(int a, int c, int b, int d, const vector<vector<int>>& p, int r, int s) {
    a = max(a, 0);
    c = max(c, 0);
    b = min(b, r - 1);
    d = min(d, s - 1);
    if (a > b || c > d) return 0;

    // 2D prefix sum ka use karke rectangle ka sum nikalte hain
    return p[b + 1][d + 1] - p[a][d + 1] - p[b + 1][c] + p[a][c];
}

// Main logic yahan likha gaya hai
void solve() {
    int n;
    cin >> n; // Number of test cases

    while (n--) {
        int r, s, k;
        cin >> r >> s >> k; // Grid ka size (r x s) aur explosion range (k)

        vector<string> f(r); // Grid store karne ke liye string array
        for (int i = 0; i < r; ++i) {
            cin >> f[i]; // Har row input lo
        }

        // Prefix sum array banate hain
        vector<vector<int>> p(r + 1, vector<int>(s + 1, 0));
        int totalGold = 0; // Total gold ka count

        for (int i = 0; i < r; ++i) {
            for (int j = 0; j < s; ++j) {
                int x = (f[i][j] == 'g') ? 1 : 0; // Agar cell mein gold hai to x = 1
                totalGold += x; // Total gold mein add karo
                // Prefix sum calculation
                p[i + 1][j + 1] = p[i][j + 1] + p[i + 1][j] - p[i][j] + x;
            }
        }

        int maxCollected = 0; // Maximum gold jo bacha sakte hain
        int h = k - 1; // Half explosion size (k is 2h + 1)

        for (int i = 0; i < r; ++i) {
            for (int j = 0; j < s; ++j) {
                if (f[i][j] != '.') continue; // Explosion sirf '.' cell pe hi ho sakta hai

                // Explosion area calculate karo (square with side 2h+1)
                int a = i - h;
                int c = j - h;
                int d = i + h;
                int e = j + h;

                // Destroyed gold calculate karo
                int destroyed = q(a, c, d, e, p, r, s);
                // Jo gold bacha, usme maximum ka dhyan rakho
                maxCollected = max(maxCollected, totalGold - destroyed);
            }
        }

        cout << maxCollected << '\n'; // Final answer print karo
    }
}

int main() {
    ios::sync_with_stdio(false); // Fast I/O
    cin.tie(nullptr); // C++ cin/cout ko optimize karta hai

#ifdef DEBUG_LOCAL
    long long s = t(); // Start timer (sirf debug ke liye)
#endif

    solve(); // Main logic run karo

#ifdef DEBUG_LOCAL
    long long e = t(); // End timer
    cerr << "Time: " << (e - s) << " µs\n"; // Execution time print karo
#endif

    return 0;
}
