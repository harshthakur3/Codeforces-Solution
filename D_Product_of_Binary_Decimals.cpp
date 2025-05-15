    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
      int t;
      cin>>t;
      while(t--)
      {
        int n;
        cin>>n;
        if(n==0 ||n==1)
        {
            cout<<"YES"<<endl;
            continue;
        }
        vector<int>v={10,11,100,101,110,111,1000,1001,1010,1011,1100,1101,1110,1111,10000,10001,10010,10011,10100,10101,10110,10111,11000,11001,11010,11011,11100,11101,11110,11111,100000};
        reverse(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        {
            while(n%v[i]==0)
            {
              n=n/v[i];
            }
        }
        if(n==1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
     
      }
    }