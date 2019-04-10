/*
 *
 * Author: Arush Nagpal
 * Default CP template 
 *
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
#define INF numeric_limits<int>::max()
#define MINUSINF numeric_limits<int>::min()
#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define REP(i, n) for (int i = 0; i < n; i++)

using namespace std;

void init(vector<vector<pair<int,int> > > graph,vector<int> distance, vector<bool> flag,int n ){
    graph.resize(n);
    REP(i,n){
        distance[i]=INF;
        flag[i]=false;
    }
}


int main(){
    int testno,n,m;
    cin>>testno;
    FOR(test,0,testno){
        cin>>n>>m;
        vector< vector<pair<int,int> > > graph;
        vector<int> distance(n);
        vector<bool> flag(n);
        init(graph, distance,flag,n);
    }

}