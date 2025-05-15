#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a(5);
    for (int &i : a)
        cin >> i;
    vector<int> ans = {1, 2, 3, 4, 5};
    for (int i = 0; i < 4; i++)
    {
        vector<int> b = a;
        swap(b[i], b[i + 1]);
        if (b == ans)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
