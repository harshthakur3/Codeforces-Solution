    #include<iostream>
    using namespace std;
    int main(){
        int a[6][6];
        int b ,c;
        
        for(int i =1;i<=5;i++){
            for(int j=1;j<=5;j++){
                cin>>a[i][j];
                if(a[i][j]==1){
                   b = i;
                   c = j;
                   break;
                }
            }
        }
        cout<<abs(c-3)+ abs(b-3);
     
    }