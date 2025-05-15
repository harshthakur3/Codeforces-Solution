#include <bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(){
   int t;
   cin >> t;
   while(t--)
   {
       int n,m,total_time;
       cin >> n >> m >> total_time;
       
       vector<pair<int,int>> teams(n);
       for(int i=0;i<n;i++)
       {
           vector<int> vals(m);
           for(int j=0;j<m;j++)
                cin >> vals[j];
           
           sort(vals.begin(),vals.end());
           
           int score=0;
           int penalty=0;
           int curr_time=0;
           for(auto ele : vals)
           {
               if(ele+curr_time<=total_time)
               {
                   curr_time+=ele;
                   score++;
                   penalty+=curr_time;
               }
           }
           
           teams[i]={score,penalty};
       }
       
       int rank=1;
       for(int i=1;i<n;i++){
           if(teams[i].first>teams[0].first) rank++;
           else if(teams[i].first==teams[0].first && teams[i].second<teams[0].second) rank++;
       }
       
       cout << rank << "\n";
   }
}