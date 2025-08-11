#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <unordered_map>

using namespace std;

class rectangle {
public:
    int x1, x2, y1, y2;
    // Default constructor is helpful, especially when creating a vector
    rectangle() : x1(0), y1(0), x2(0), y2(0) {} 
    rectangle(int _x1, int _y1, int _x2, int _y2) {
        this->x1 = _x1;
        this->x2 = _x2;
        this->y1 = _y1;
        this->y2 = _y2;
    }
};

long long int totalArea(int n, rectangle r[]) {
    if (n == 0) {
        return 0;
    }

    // Collect all unique coordinates
    set<int> xs, ys;
    for (int i = 0; i < n; i++) {
        xs.insert(r[i].x1);
        xs.insert(r[i].x2);
        ys.insert(r[i].y1);
        ys.insert(r[i].y2);
    }

    // Create sorted vectors of unique coordinates
    vector<int> xv(xs.begin(), xs.end());
    vector<int> yv(ys.begin(), ys.end());

    // Map each coordinate to its compressed index
    unordered_map<int, int> xi, yi;
    for (int i = 0; i < xv.size(); i++) {
        xi[xv[i]] = i;
    }
    for (int i = 0; i < yv.size(); i++) {
        yi[yv[i]] = i;
    }

    // --- FIX 2: Define grid dimensions ---
    int x_count = xv.size();
    int y_count = yv.size();
    
    vector<vector<int>> diff(x_count + 1, vector<int>(y_count + 1, 0));

    // Mark rectangles on the difference grid
    for (int i = 0; i < n; i++) {
        int x1_idx = xi[r[i].x1];
        int x2_idx = xi[r[i].x2];
        int y1_idx = yi[r[i].y1];
        int y2_idx = yi[r[i].y2];
        
        diff[x1_idx][y1_idx]++;
        diff[x2_idx][y2_idx]++;
        diff[x1_idx][y2_idx]--;
        diff[x2_idx][y1_idx]--;
    }

    // Calculate 2D prefix sums to find coverage count for each cell
    for (int i = 0; i < x_count; i++) {
        for (int j = 1; j < y_count; j++) {
            diff[i][j] += diff[i][j - 1];
        }
    }
    for (int j = 0; j < y_count; j++) {
        for (int i = 1; i < x_count; i++) {
            diff[i][j] += diff[i - 1][j];
        }
    }

    // Calculate total area by summing areas of covered grid cells
    long long int A = 0;
    for (int i = 0; i < x_count - 1; i++) {
        for (int j = 0; j < y_count - 1; j++) {
            if (diff[i][j] > 0) {
                long long width = xv[i + 1] - xv[i];
                long long height = yv[j + 1] - yv[j];
                A += width * height;
            }
        }
    }
    
    return A;
}

int main() {
    int n;
    cin >> n;

    // Use a vector for better C++ practice than Variable Length Arrays (VLA)
    vector<rectangle> r(n); 
    
    for (int i = 0; i < n; i++) {
        // --- FIX 1: Correct the input reading order ---
        cin >> r[i].x1 >> r[i].y1 >> r[i].x2 >> r[i].y2;
    }

    // Pass the pointer to the vector's underlying array
    cout << totalArea(n, r.data()) << endl; 
    
    return 0;
}