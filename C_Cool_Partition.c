#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

#define MAXN 1000005
#define MOD 1000000007
#define MOD2 998244353
#define INF 1000000000000000000LL
#define EPS 1e-9
#define PI 3.14159265358979323846

#define vi int*
#define scan(x) scanf("%d", &x)
#define scanv(v, n) for (int i = 0; i < (n); i++) scanf("%d", &(v)[i])
#define printv(v, n) for (int i = 0; i < (n); i++) printf("%d ", (v)[i]); printf("\n")
#define min(a,b) ((a)<(b)?(a):(b))
#define max(a,b) ((a)>(b)?(a):(b))

int solve() {
    int n;
    scan(n);

    int* a = (int*) malloc(n * sizeof(int));
    scanv(a, n);

    int* lastSeen = (int*) malloc((n + 1) * sizeof(int));
    for (int i = 0; i <= n; i++) lastSeen[i] = n;

    int* nextIndex = (int*) malloc(n * sizeof(int));

    for (int i = n - 1; i >= 0; i--) {
        int value = a[i];
        nextIndex[i] = lastSeen[value];
        lastSeen[value] = i;
    }

    int segments = 0;
    int start = 0;

    while (start < n) {
        int end = start;
        while (1) {
            int farthest = 0;
            for (int j = start; j <= end; j++) {
                if (nextIndex[j] > farthest)
                    farthest = nextIndex[j];
            }
            segments++;

            if (farthest >= n)
                break;

            start = end + 1;
            end = farthest;
        }
        break;
    }

    free(a);
    free(lastSeen);
    free(nextIndex);

    return segments;
}

int main() {
    int t;
    scan(t);
    while (t--) {
        int ans = solve();
        printf("%d\n", ans);
    }
    return 0;
}
