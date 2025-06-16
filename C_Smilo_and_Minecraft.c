#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <sys/time.h>


long long t() {
    struct timeval v;
    gettimeofday(&v, NULL);
    return (long long)v.tv_sec * 1000000LL + v.tv_usec;
}


int q(int a, int c, int b, int d, int **p, int r, int s) {
    if (a < 0) a = 0;
    if (c < 0) c = 0;
    if (b > r - 1) b = r - 1;
    if (d > s - 1) d = s - 1;
    if (a > b || c > d) return 0;
    
    return p[b + 1][d + 1] - p[a][d + 1] - p[b + 1][c] + p[a][c];
}

int m(int a, int b) {
    return (a > b) ? a : b;
}

void solve() {
    int n;
    scanf("%d", &n);
    
    while (n--) {
        int r, s, k;
        scanf("%d %d %d", &r, &s, &k);
        
        
        char **f = (char**)malloc(r * sizeof(char*));
        for (int i = 0; i < r; i++) {
            f[i] = (char*)malloc((s + 1) * sizeof(char));
        }
        
        for (int i = 0; i < r; i++) {
            scanf("%s", f[i]);
        }
        
    
        int **p = (int**)malloc((r + 1) * sizeof(int*));
        for (int i = 0; i <= r; i++) {
            p[i] = (int*)calloc(s + 1, sizeof(int));
        }
        
        int g = 0;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < s; j++) {
                int x = (f[i][j] == 'g') ? 1 : 0;
                g += x;
                p[i + 1][j + 1] = p[i][j + 1] + p[i + 1][j] - p[i][j] + x;
            }
        }
        
        int b = 0;
        int h = k - 1;
        
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < s; j++) {
                if (f[i][j] != '.') continue;
                
                int a = i - h;
                int c = j - h;
                int d = i + h;
                int e = j + h;
                
                int w = q(a, c, d, e, p, r, s);
                b = m(b, g - w);
            }
        }
        
        printf("%d\n", b);
        
        for (int i = 0; i < r; i++) {
            free(f[i]);
        }
        free(f);
        
        for (int i = 0; i <= r; i++) {
            free(p[i]);
        }
        free(p);
    }
}

int main() {
    setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stdin, NULL, _IONBF, 0);
    
#ifdef DEBUG_LOCAL
    long long s = t();
#endif
    
    solve();
    
#ifdef DEBUG_LOCAL
    long long e = t();
    long long d = e - s;
    fprintf(stderr, "Time: %lld µs\n", d);
#endif
    
    return 0;
}