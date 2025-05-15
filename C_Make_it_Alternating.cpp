#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;

// Function to calculate factorial modulo MOD
long long factorialMod(int n) {
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result = (result * i) % MOD;
    }
    return result;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        // Step 1: Divide the string into blocks
        vector<int> blockLengths;
        int count = 1;
        for (int i = 1; i < s.size(); i++) {
            if (s[i] == s[i - 1]) {
                count++;
            } else {
                blockLengths.push_back(count);
                count = 1; // Reset for the next block
            }
        }
        blockLengths.push_back(count); // Add the last block

        // Step 2: Calculate the minimum number of operations
        int numErased = s.size() - blockLengths.size();

        // Step 3: Calculate the number of shortest sequences
        long long numWays = 1;
        for (int length : blockLengths) {
            numWays = (numWays * length) % MOD; // Multiply ways modulo MOD
        }

        long long permutations = factorialMod(numErased);
        long long result = (numWays * permutations) % MOD;

        // Step 4: Output the result
        cout << numErased << " " << result << endl;
    }
    return 0;
}
