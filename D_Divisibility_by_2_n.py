
def count_divisibility_by_2(num):
    count = 0
    while num % 2 == 0:
        num //= 2
        count += 1
    return count

def min_operations_to_divisible(arr, n):
    total_operations = 0
    for num in arr:
        total_operations += count_divisibility_by_2(num)
    
    if total_operations < n:
        return -1
    
    return total_operations - n

def main():
    t = int(input())  # Number of test cases
    for _ in range(t):
        n = int(input())  # Length of array
        arr = list(map(int, input().split()))  # Array elements

        result = min_operations_to_divisible(arr, n)

        print(result)

if __name__ == "__main__":
    main()
