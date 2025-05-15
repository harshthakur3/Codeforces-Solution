    #include<iostream>
    using namespace std;
    int main(){
        int t;
        cin >> t;
        while(t--){
            int ii = 0, t = 0;
            string s;
            cin >> s;
            for(int i = 0 ; i <s.size() ; i++){
                if(s[i] == 'i' && s[i + 1] == 't') ii++;
            }
            if(ii > 0){
                cout << "YES" << endl;
            }
            else cout << "NO" << endl;
        }
    }