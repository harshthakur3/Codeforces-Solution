#include <bits/stdc++.h>


using namespace std;

#define ll long long
#define ull unsigned long long
#define vi vector<int>
#define vll vector<long long>
#define vpi vector<pair<int,int>>
#define vpll vector<pair<ll,ll>>
#define mapi map<int,int>
#define mapll map<ll,ll>
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define fori_n for(int i = 0; i<n; i++)

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, h;
        cin >> h >> n;
        vll a, b;
        ll x;
        fori_n{
            cin >> x;
            a.push_back(x);
        }
        int64_t attack = 0;
        fori_n{
            cin >> x;
            b.push_back(x);
            attack+=a[i];
        }
        if(attack>=h){
            cout << 1 << endl;
        }
        else{ 
            h-=attack;
            int64_t tempatt = attack, l = 0, r = 1e12, mid, ans;
            while(l<=r){
                mid = (l+r)/2;
                attack = 0;
                fori_n{
                    attack+=((mid-1)/b[i])*a[i];
                }
                if(attack>=h){
                    ans=mid;
                    r = mid-1;
                }
                else l = mid+1;
            }
            cout << ans << endl;
        }
        

        

    }

    return 0;
}