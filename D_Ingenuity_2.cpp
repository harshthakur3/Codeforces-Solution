#include <bits/stdc++.h>
#define lil long long int
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define println(a) cout << a << endl
#define ain(i,arr,n) for(int i=0; i<n; i++) cin >> arr[i]
#define aout(i,arr,n) for(int i=0; i<n; i++) cout << arr[i] << endl
using namespace std;
int main() {
    lil t;
    cin>>t;
    while(t--)
    {
        lil n;
        cin>>n;
        string s;
        cin>>s;
         lil N=0;
         lil S=0;
         lil W=0;
         lil E=0;
         for(lil i=0; i<n; i++)
         {
                if(s[i]=='N')
                N++;
                else if(s[i]=='S')
                S++;
                if(s[i]=='E')
                E++;
                if(s[i]=='W')
                W++;
         }
         if(N==0 && S%2!=0)
         cout<<"NO"<<endl;
         else if(S==0 && N%2!=0)
         cout<<"NO"<<endl;
         else if(E==0 && W%2!=0)
         cout<<"NO"<<endl;
         else if(W==0 && E%2!=0)
         cout<<"NO"<<endl;
         else if (n%2!=0)
         cout<<"NO"<<endl;
         else if((abs(N-S) %2!=0) || (abs(E-W)%2!=0))
         cout<<"NO"<<endl;
         else if(n==2)
         {
            if(E==1 || W==1 || N==1 || S==1)
            cout<<"NO"<<endl;
            else cout<<"RH"<<endl;
         }
         else {
            
            bool flagup=true;
            bool flagdown=true;
            bool flagleft=true;
            bool flagright=true;
            for(lil i=0; i<n; i++)
            {
                if(s[i]=='N')
                {
                    if(flagup)
                    {
                        cout<<"R";
                        flagup=false;
                    }
                    else {
                        cout<<"H";
                        flagup=true;
                    }
                }
                else if(s[i]=='S')
                {
                    if(flagdown)
                    {
                        cout<<"R";
                        flagdown=false;
                    }
                    else 
                    {
                        cout<<"H";
                        flagdown=true;
                    }

                }
                else if(s[i]=='E')
                {
                    if(flagleft)
                    {
                        cout<<"H";
                        flagleft=false;
                    }
                    else 
                    {
                        cout<<"R";
                        flagleft=true;
                    }
                }
                else if(s[i]=='W')
                {
                    if(flagright)
                    {
                        cout<<"H";
                        flagright=false;
                    }
                    else
                    {
                         cout<<"R";
                         flagright=true;
                    }

                }
            }
            cout<<endl;
         }
    }

}