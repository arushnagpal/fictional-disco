/*
 *
 * Author: Arush Nagpal
 * Default CP template 
 * Incomplete
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

using namespace std;

vector <int> parent(50000,-1);


int find(vector<int> parent, int i) 
{ 
    if (parent[i] == -1) 
        return i; 
    return find(parent, parent[i]); 
} 
  
void Union(vector <int> parent, int x, int y) 
{ 
    int xset = find(parent, x); 
    int yset = find(parent, y); 
    if(xset!=yset){ 
       parent[xset] = yset; 
    } 
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    lli testno,n,k;
    cin>>testno;
    FOR(test,1,testno){
        parent.resize(50000,-1)
        int n,a,b;
        cin>>n;
        REP(k,n){
            cin>>a>>b;
            if()
        }
       

        printf("Case %lld: %llu\n", test, fn(n) % 10000007);
    }
}


