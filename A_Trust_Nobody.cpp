#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        //sort(arr,arr+n);
        
        int flag=0;

        for(int i = 0; i<n; i++){
            int c=0;
            for(int j=0; j<n; j++){
                if(arr[j]>i){
                    c++;
                }

            }
            if(c==i){
                cout<<c<<"\n";
                flag=1;
                break;
            }

        }
        if(flag==0){
            cout<<-1<<"\n";
        }
    }
    return 0;
}