#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<int> reduce(vector<int> temp) {
    vector<int> res;
    for (int i = 1; i < temp.size(); i++) {
        res.push_back(temp[i] - temp[i - 1]);
    }
    return res;
}
void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int sum = 0;
    sum = accumulate(v.begin(), v.end(), 0LL);
    vector<int> curr = v;

    while (curr.size() > 1) {
        vector<int> temp = curr;
        sum = max(sum, accumulate(temp.begin(), temp.end(), 0LL));

        reverse(temp.begin(), temp.end());
        temp = reduce(temp);
        sum = max(sum, accumulate(temp.begin(), temp.end(), 0LL));

        temp = reduce(curr);
        sum = max(sum, accumulate(temp.begin(), temp.end(), 0LL));

        curr = temp;
    }

    cout << sum << endl;
}

void solve1(){
    long long i,n,sum=0,ans=0;
        cin>>n;
        long long a[n];
        for(i=0;i<n;i++) {
            cin>>a[i];
            sum+=a[i];
        }
        if(n==1) cout<<a[0]<<endl;
        else {
            vector<long long> v;
            for(i=0;i<n;i++) {
                v.push_back(a[i]);
            }
            
            while(v.size()>1) {
                if(v[0]>v[v.size()-1]) reverse(v.begin(),v.end());
                vector<long long> v1;
                ans=0;
                for(i=1;i<v.size();i++) {
                    v1.push_back(v[i]-v[i-1]);
                    ans+=(v[i]-v[i-1]);
                }
                sum=max(sum,ans);
                v=v1;
            }
            cout<<sum<<endl;
        }
}
#undef int
int main() {
    #define int long long
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        int sum = 0;
        for(int i = 0; i < n; i++){
            cin >> v[i];
            sum += v[i];
        }
        while(v.size() > 1){
            vector<int> temp = v, b;
            int ans = 0;
            for(int i = 1; i < v.size(); i++){
                b.push_back(v[i] - v[i - 1]);
                ans += b[i - 1];
            }
            v = b;
            sum = max(sum, abs(ans));
        }
        cout << sum << endl;
    }
    return 0;
}
