/*
 *
 * Author: Arush Nagpal
 * Default CP template 
 * Incomplete(not working)
 */
#include <bits/stdc++.h>
#define pb      push_back
#define lli long long int
#define vlli    vector<lli>
#define plli    vector<pair<lli,lli> >
#define mp      make_pair
#define all(v)  v.begin(),v.end()
#define fileinput freopen("input.txt", "r", stdin);
#define fileoutput freopen("output.txt", "w", stdout);
#define INF 9999
#define MINUSINF -999999
#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define REP(i, n) for (int i = 0; i < n; i++)

using namespace std;


int main(){
    int testno,n,m,t;
    cin>>testno;
    FOR(test,0,testno){
        cin>>n>>m;
        vector< vector<pair<int,int> > > graph(n);
        vector<int> eachdistance(n,INF);
        vector<bool> visited(n,false);

        REP(i,n){
            eachdistance[i]=INF;
            visited[i]=false;
        }
        int u,v,w;
        while(m--){
            cin>>u>>v>>w;
            graph[v].push_back(mp(u,w));
            graph[u].push_back(mp(v,w));
        }
        cin>>t;
        
            //MODIFIED DIJKSTRA -----
            eachdistance[t] = 0;
            while (1) {
                int u = -1, minD = INF;
                REP(i, n)
                    if (!visited[i] && eachdistance[i] < minD) {
                        u = i; minD = eachdistance[i];
                    }
                if (u == -1) break;
                visited[u] = true;
                REP(i, graph[u].size()) {
                    int v = graph[u][i].first, w = max(eachdistance[u], graph[u][i].second);
                    if (!visited[v] && eachdistance[v] > w)
                        eachdistance[v] = w;
                }
            }
            //-------

        printf("Case %d:\n",test);
        REP(i,n){
            if(eachdistance[i]!=INF){
                cout<<eachdistance[i]<<endl;
            }else{
                cout<<"Impossible"<<endl;
            }
        }

    }

}