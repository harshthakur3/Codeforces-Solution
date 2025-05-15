#include<iostream>
using namespace std;

// Function to calculate the sum of numbers in the range [start, end] inclusively
long long range_sum(long long start, long long end) {
    // Number of elements in the range
    long long n = end - start + 1;
    
    // Use arithmetic series formula to calculate the sum
    long long sum = (n * (start + end)) / 2;
    
    return sum;
}

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        // Calculate and print the sum for the current test case
        cout << range_sum(a, b) << endl;
    }
    return 0;
}
