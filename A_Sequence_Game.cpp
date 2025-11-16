#include<bits/stdc++.h>
using namespace std;


// This night is cold in the kingdom
// I can feel you fade away
// From the kitchen to the bathroom sink and
// Your steps keep me awake
// Don't cut me down, throw me out, leave me here to waste
// I once was a man with dignity and grace
// Now I'm slipping through the cracks of your cold embrace
// So please, please


int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        int x;
        cin >> x;
        sort(v.begin(), v.end());
        if(v[0] <= x && x <= v[n - 1]){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}