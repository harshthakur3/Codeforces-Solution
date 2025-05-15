#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, t;
    cin >> n >> t;
    
    vector<string> answers(n);
    vector<int> target(n, 0);  
    vector<bool> isPlus(n, false);  
    
    for (int i = 0; i < n; i++){
        string s;
        cin >> s;
        answers[i] = s;
        isPlus[i] = (s[0] == '+');
        target[i] = stoi(s.substr(1));
    }
    
    vector<int> plusCount(n + 1, 0), minusCount(n + 1, 0);
    int totalMinus = 0;
    for (int i = 0; i < n; i++){
        int x = target[i];
        if(isPlus[i]){
            plusCount[x]++;
        } else {
            minusCount[x]++;
            totalMinus++;
        }
    }
    
    vector<bool> valid(n + 1, false); 
    int validCount = 0;
    for (int L = 1; L <= n; L++){
        int cnt = totalMinus + plusCount[L] - minusCount[L];
        if(cnt == t){
            valid[L] = true;
            validCount++;
        }
    }
    
    for (int i = 0; i < n; i++){
        int x = target[i];
        if(isPlus[i]){
            if(valid[x]){
                if(validCount == 1)
                    cout << "Truthful" << "\n";
                else
                    cout << "Agamotto failed" << "\n";
            } else {
                cout << "Enchanted" << "\n";
            }
        } else {
            if(!valid[x]){
                cout << "Truthful" << "\n";
            } else {
                if(validCount == 1)
                    cout << "Enchanted" << "\n";
                else
                    cout << "Agamotto failed" << "\n";
            }
        }
    }
    return 0;
}
