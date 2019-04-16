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

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    lli testno;
    cin>>testno;
    FOR(test,1,testno){
        lli num;
        cin>>num;
        lli sqt = ceil(sqrt(num));
        lli extnum = sqt*sqt - num;
        lli row = 0, col = 0;

        if(extnum < sqt){
            row = extnum + 1;
            col = sqt;
        }
        else{
            row = sqt;
            col = num - (sqt - 1) * (sqt - 1);
        }

        if(sqt % 2 == 0) swap(row, col);
        printf("Case %lld: %llu %llu\n", test, row ,col);
    }
}