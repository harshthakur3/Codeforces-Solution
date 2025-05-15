#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
    int t;
    cin >> t;
    
    while(t--) {
        int l, r, d, u;
        cin >> l >> r >> d >> u;
        
        // The four points are at:
        // L = (-l, 0)
        // R = (r, 0)
        // D = (0, -d)
        // U = (0, u)
        
        // For these points to form a square:
        // 1. All sides must be equal length
        // 2. All inner angles must be 90 degrees
        
        // Calculate the distances between all pairs of points
        double LD = sqrt(l*l + d*d);
        double LU = sqrt(l*l + u*u);
        double RD = sqrt(r*r + d*d);
        double RU = sqrt(r*r + u*u);
        
        // Calculate the horizontal and vertical distances
        double horizontal = l + r;
        double vertical = u + d;
        
        // For a square, all sides must be equal and diagonals must be equal
        // Also, diagonals must bisect each other
        
        // Check if it's a square
        if (LD == LU && LD == RD && LD == RU && horizontal == vertical) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    
    return 0;
}