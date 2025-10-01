#include<bits/stdc++.h>
using namespace std;
#define int long long
// This night is cold in the kingdom
// I can feel you fade away
// From the kitchen to the bathroom sink and
// Your steps keep me awake
// Don't cut me down, throw me out, leave me here to waste
// I once was a man with dignity and grace
// Now I'm slipping through the cracks of your cold embrace
// So please, please.........
// ⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⠀⠀⠀⠀⠀⠀⠀⠀
// ⠀⠀⠀⢀⣠⣶⣿⣿⣿⣿⣿⣿⣶⣦⣄⠀⠀⠀⠀⣀⣤⣶⣿⣿⣿⣿⣿⣿⣶⣦⡀⠀⠀⠀
// ⠀⠀⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠀⢀⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⡄⠀
// ⠀⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠋⠀⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡄
// ⣸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⣄⡈⠛⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷
// ⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⠄⠈⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
// ⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠋⠀⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿
// ⠸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠃⢀⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟
// ⠀⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠁⢀⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠁
// ⠀⠀⠻⣿⣷⣿⣿⣿⣿⣿⣿⣿⣿⣿⠁⢠⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠁⠀
// ⠀⠀⠀⠹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣧⡀⠙⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⠀⠀⠀
// ⠀⠀⠀⠀⠈⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣄⠈⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠋⠀⠀⠀⠀
// ⠀⠀⠀⠀⠀⠀⠘⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⠀⢹⣿⣿⣿⣿⣿⣿⡿⠋⠀⠀⠀⠀⠀⠀
// ⠀⠀⠀⠀⠀⠀⠀⠀⠙⠻⣿⣿⣿⣿⣿⣿⣿⡟⠀⢸⣿⣿⣿⣿⡿⠋⠀⠀⠀⠀⠀⠀⠀⠀
// ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠻⢿⣿⣿⣿⣿⠃⠀⣿⣿⣿⠟⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
// ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠻⣿⡏⠀⢰⡿⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
// ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠁⠀⠈⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
signed main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int> v;
        int count = 0;
        int j = 0;
        while(s[j] == 'L') j++;
        for(int i = j; i < n; i++){
            if(s[i] == 'L') count++;
            if(count != 0 && s[i] == 'W'){
                v.push_back(count);
                count = 0;
            }
        }
        sort(v.begin(), v.end());
        int wins = 0;
        int win_streak = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == 'W')wins++;
        }
        if(s[0] == 'W') win_streak = 1;
        for(int i = 1; i < n; i++){
            if(s[i] == 'W' && s[i - 1] == 'L') win_streak++;
        }

        if(wins + k >= n){
            cout << 2*n - 1 << endl;
        }
        else{
            int newwins = 0;
            for(int i = 0; i < v.size(); i++){
                if(k >= v[i]){
                    k -= v[i];
                    newwins += v[i];
                    win_streak--;
                }
            }
            if(wins == 0 && k != 0){
                cout << 1 + (k - 1)*2 << endl;
            }
            else cout << (wins + newwins + k)*2 - win_streak << endl;
            //bkl accept hoja
        }
    }
}