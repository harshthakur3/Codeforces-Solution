#include <bits/stdc++.h>
#define int long long
#define pb push_back
#define endl "\n"
#define vi vector<int>
#define vpi vector<pair<int,int>>
#define mod 1000000007
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define fastt ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
int32_t main(){
fastt;
int T;
cin >> T;
while(T--){
    int n;
    string s;
    cin >> n >> s;
    int r=sqrt(n);
    if (r*r!=n) no;
    else{
        bool ok=true;
        for (int i=0;i<r;i++){
            if(s[i]!='1' or s[i*r]!='1' or s[r*(i+1)-1]!='1' or s[(r-1)*r+i]!='1'){
                ok=false;
                break;
            }
        }
        if(ok and r>2){
            for(int i=1;i<r-1;i++){
                for(int j=1;j<r-1;j++){
                    if(s[i*r+j]!='0'){
                        ok=false;
                        break;
                    }
                }
            if(!ok) break;
            }
        }
    if (ok) yes;
    else no;
    }
}
return 0;
}