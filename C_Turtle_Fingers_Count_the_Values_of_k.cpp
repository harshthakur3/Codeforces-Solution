#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, l;
        cin >> a >> b >> l;
        /*int count = 0;
        int x = 0, y = 0;
        if(a != b){
            while(pow(a, x) <= l){
                while(pow(b, y) <= l){
                    int z = pow(a, x) * pow(b, y);
                    if(l % z == 0){count++;}
                    ++y;
                }
                ++x;
                y = 0;
            }
        }
        else{
            count++;
            while(l != 1){
                count++;
                l = l/a;
            }
            
        }
        cout << count << endl; */
        int kola = l - 1;
        kola++;
        set<int> ss;
        long int p = 0;
        long int f = 1;
        long int s = 1;
        while(kola%f == 0){
            int pro = f;
            while(kola%pro == 0){
                ss.insert(kola/pro);
                pro*= b;
            }
            f*=a;
        }
        cout << ss.size() << endl;
    }
    return 0;
}

