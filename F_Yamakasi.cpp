#include <bits/stdc++.h>



using namespace std;



using int64 = long long;







/*------------------------------------------------------------



   Count subarrays whose sum == S *and* every element ≤ lim.



------------------------------------------------------------*/



static int64 count_leq(const vector<int64>& a, int64 S, int64 lim)



{
    



    int64 ans = 0, pref = 0;



    unordered_map<int64,int64> freq;



    freq.reserve(256);           // small start, grows if needed



    freq.max_load_factor(0.7);



    freq[0] = 1;                 // empty prefix







    for (int64 v : a)



    {



        if (v > lim) {           // break the block



            pref = 0;



            freq.clear();



            freq[0] = 1;



            continue;



        }



        pref += v;



        auto it = freq.find(pref - S);



        if (it != freq.end()) ans += it->second;



        ++freq[pref];



    }



    return ans;



}







int main() {



    ios::sync_with_stdio(false);



    cin.tie(nullptr);







    int T;



    cin >> T;



    while (T--) {



        int n;            int64 S, X;



        cin >> n >> S >> X;







        vector<int64> a(n);



        for (auto &v : a) cin >> v;







        /* subarrays with max == X  =  subarrays with max ≤ X  −  subarrays with max ≤ X−1 */



        int64 res = count_leq(a, S, X) - count_leq(a, S, X - 1);



        cout << res << '\n';



    }



    return 0;



}