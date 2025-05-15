import sys
from math import comb

def main():
    input = sys.stdin.read().split()
    idx = 0
    t = int(input[idx])
    idx += 1
    for _ in range(t):
        n = int(input[idx])
        idx +=1
        a = list(map(int, input[idx:idx+n]))
        idx +=n
        if n == 1:
            print(a[0])
            continue
        original_sum = sum(a)
        res = 0
        for i in range(n):
            sign = (-1) ** i
            c = comb(n-1, i)
            res += a[i] * sign * c
        max_sum = max(original_sum, abs(res))
        print(max_sum)

if __name__ == "__main__":
    main()