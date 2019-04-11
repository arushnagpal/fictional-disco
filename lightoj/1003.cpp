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
#define max3(a, b, c) max(a, b) > max(b, c) ? max(a, b) : max(b, c)
#define min3(a, b, c) min(a, b) < min(b, c) ? min(a, b) : min(b, c)
#define maxN 200001
//   ios_base::sync_with_stdio(false);cin.tie(NULL);   // FAST IO
using namespace std;


vector<int> graph[maxN];
vector<bool> visited;
vector<bool> recStack; 

void init(int num){
    visited.resize(num);
    recStack.resize(num);
    REP(i,num){
        visited[i]=false;
        recStack[i]=false;
    }
    
}
bool isCyclic(int i){
    if(visited[i] == false) 
    { 
        visited[i] = true; 
        recStack[i] = true; 

        for(int k = 0; k<graph[i].size() ; k++) 
        { 
            int node=graph[i][k];
            if ( !visited[node] && isCyclic(node) ) 
                return true; 
            else if (recStack[node]) 
                return true; 
        } 
    } 
    recStack[i] = false;  // remove the vertex from recursion stack 
    return false;
}

int main() {
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  int testno;
  cin >> testno;
  FOR(test, 1, testno) {
      map<string,int> nodemap;
      int nodes,num;
      cin>>nodes;
      string a,b;
      int id=0;
      bool cyclic = false;
      while(nodes--){
        cin>>a>>b;
        if(!nodemap[a])
            nodemap[a]=id++;
        if(!nodemap[b])
            nodemap[b]=id++;
        graph[nodemap[b]].pb(nodemap[a]);
      }
      num=id;
        init(num);
        // cout<<"yahooo";
        FOR(i,0,num){
            if(isCyclic(i))
                cyclic=true;
        }
        if(cyclic==true){
            cout<<"Case "<<test<<": "<<"No\n";
        }
        else{
            cout<<"Case "<<test<<": "<<"Yes\n";
        }
        FOR(i,0,num)graph[i].clear();
  }
  return 0;
}