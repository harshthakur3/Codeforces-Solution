#include <bits/stdc++.h>
using namespace std;
void solve()
{   
    long long n, t;
    cin >> n >> t;
    long long int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    map<long long int, long long int> prevSum;
    long long int count = 0;
    long long int Sum = 0;

    for (int i = 0; i < n; i++) {
        Sum += arr[i];

        if (Sum == t) // agar prefix sum t ke barabar hua to count++ kia hai;
            count++;

        if (prevSum.find(Sum - t) != prevSum.end()) // we check if sum - t exist or not if this exist we add the count
            count += (prevSum[Sum - t]);

        prevSum[Sum]++; // counting how many times the given prefix sum came
    }

    cout << count;
}

int main()
{
    solve();
    return 0;
}
