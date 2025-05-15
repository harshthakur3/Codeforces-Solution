#include<iostream>
using namespace std;
int main(){
    float avg;
    int sum;
    float t,n;
    cin>>t;
    while(t--){
        sum=0;
        cin >>n;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            sum+=x;
        }
        avg=sum/n;
        if(avg==1){
            cout<<"0\n";
        }
        else if(avg<1){
            cout<<"1\n";
        }
        else{
            cout<<sum-n<<"\n";

        }
    }
}