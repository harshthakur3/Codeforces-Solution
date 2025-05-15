#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string a, b, c;
        cin >> a >> b >> c;
        a = a + '*';
        b = b + '*';
        int pa = 0, pb = 0, count = 0;
        for(int i = 0; i < c.size(); i++){
            if(c[i] == a[pa]){
                pa++;
            }
            else if(c[i] == b[pb]){
                pb++;
            }
            else{
                count++;
            }
        }
        cout << count << endl;
    }
}