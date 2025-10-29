#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    if (!(cin >> N >> M)) return 0;
    vector<vector<int>> adj(N+1);
    for(int i=0;i<M;i++){
        int u,v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    string S; cin >> S;

    vector<int> safeList, dangerList;
    for(int i=1;i<=N;i++){
        if (S[i-1]=='S') safeList.push_back(i);
        else dangerList.push_back(i);
    }

    const int INF = 1e9;
    vector<int> visCount(N+1, 0);
    vector<int> firstSrc(N+1, -1), firstDist(N+1, INF);
    vector<int> secondSrc(N+1, -1), secondDist(N+1, INF);

    queue<int> qv, qsrc, qd;

    for (int s : safeList){
        if (firstSrc[s] == -1){
            firstSrc[s] = s;
            firstDist[s] = 0;
            visCount[s] = 1;
            qv.push(s); qsrc.push(s); qd.push(0);
        }
    }

    while(!qv.empty()){
        int v = qv.front(); qv.pop();
        int src = qsrc.front(); qsrc.pop();
        int d = qd.front(); qd.pop();

        if (!( (firstSrc[v]==src && firstDist[v]==d) || (secondSrc[v]==src && secondDist[v]==d) )) continue;

        for (int to : adj[v]){
            int nd = d + 1;
            if (firstSrc[to]==src){
                if (nd >= firstDist[to]) continue;
                firstDist[to] = nd;
                qv.push(to); qsrc.push(src); qd.push(nd);
                continue;
            }
            if (secondSrc[to]==src){
                if (nd >= secondDist[to]) continue;
                secondDist[to] = nd;
                qv.push(to); qsrc.push(src); qd.push(nd);
                continue;
            }
            if (firstSrc[to] == -1){
                firstSrc[to] = src;
                firstDist[to] = nd;
                visCount[to] = 1;
                qv.push(to); qsrc.push(src); qd.push(nd);
            } else if (secondSrc[to] == -1 && firstSrc[to] != src){
                secondSrc[to] = src;
                secondDist[to] = nd;
                visCount[to] = 2;
                qv.push(to); qsrc.push(src); qd.push(nd);
            }
        }
    }

    for (int v : dangerList){
        long long a = firstDist[v];
        long long b = secondDist[v];
        cout << (a + b) << '\n';
    }

    return 0;
}
