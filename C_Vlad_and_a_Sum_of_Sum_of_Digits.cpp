    #include<bits/stdc++.h>
    using namespace std;
     
    int main(){
        int t,n,arr[200000],sum;
        cin >> t;
            for(int i=0;i<10;i++)
            {
                arr[i] = i;
            }
            for(int i=10;i<100;i++)
            {
                arr[i] = arr[i-10]+1;;
            }
            for(int i=100;i<1000;i++)
            {
                arr[i] = arr[i-100]+1;;
            }
            for(int i=1000;i<10000;i++)
            {
                arr[i] = arr[i-1000]+1;
            }
            for(int i=10000;i<100000;i++)
            {
                arr[i] = arr[i-10000]+1;
            }       
            for(int i=100000;i<200001;i++)
            {
                arr[i] = arr[i-100000]+1;
            }
            for(int i=1;i<200001;i++)
            {
                arr[i] = arr[i] + arr[i-1];
            }
        while(t--)
        {
            cin >> n;
            
            
            cout << arr[n] << endl;
            
        }
        return 0 ;
    }