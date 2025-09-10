#include <stdio.h>

#define N	500000
#define A	1000000

int main() {
	static int aa[N], kk[A + 1];
	int n, k, i, j, a, cnt, imax, max;

	scanf("%d%d", &n, &k);
	for (i = 0; i < n; i++)
		scanf("%d", &aa[i]);
	max = -1, imax = -1;
	cnt = 0;
	for (i = 0, j = 0; i < n; i++) {
		a = aa[i];
		if (kk[a]++ == 0)
			cnt++;
		while (j < n && cnt > k) {
			a = aa[j++];
			if (--kk[a] == 0)
				cnt--;
		}
		if (max < i - j) {
			max = i - j;
			imax = i;
		}
	}
	printf("%d %d\n", imax - max + 1, imax + 1);
	return 0;
}
