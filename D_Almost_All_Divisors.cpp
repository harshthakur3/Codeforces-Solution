    #include<bits/stdc++.h>
    using namespace std;
     
    int main(){
        int t;
        cin >> t;
     
        while(t--)
        {
            int n;
            cin >> n;
     
            int arr[n];
     
            long long max = 0;
            long long min = INT_MAX;
            for(int i=0;i<n;i++)
            {
                cin >> arr[i];
     
                if(arr[i]>max) max = arr[i];
                if(arr[i]<min) min = arr[i];
            }
     
            sort(arr,arr+n);
     
     
            long long num = min * max;
     
            int j = 0;
            bool check = true;
            for(int i=2;i<=arr[n-1];i++)
            {
                if(num%i==0)
                {
                    if(arr[j]==i) j++;
     
                    else
                    {
                        check = false;
                        break;
                    }
                }
            }
            if(check)cout << num << endl;
            else cout << -1 << endl;
     
     
        }
        return 0 ;
    }