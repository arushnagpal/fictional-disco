/*
 *
 * Author: Arush Nagpal
 * Default CP template 
 *
 */
#include <bits/stdc++.h>
#define pb      push_back
#define lli unsigned long long int
#define vlli    vector<lli>
#define plli    vector<pair<lli,lli> >
#define mp      make_pair
#define all(v)  v.begin(),v.end()
#define fileinput freopen("input.txt", "r", stdin);
#define fileoutput freopen("output.txt", "w", stdout);
#define INF numeric_limits<int>::max()
#define MINUSINF numeric_limits<int>::min()
#define FOR(i, a, b) for (unsigned long long int i = a; i <= b; i++)
#define REP(i, n) for (unsigned long long int i = 0; i < n; i++)
#define max3(a, b, c) max(a, b) > max(b, c) ? max(a, b) : max(b, c)
#define min3(a, b, c) min(a, b) < min(b, c) ? min(a, b) : min(b, c)

using namespace std;

lli fact(lli n){
    lli ans=1;
    FOR(i,1,n){
        ans*=i;
    }
    return ans;
}

int main(){
    lli testno,n,k;
    cin>>testno;
    FOR(test,1,testno){
        cin>>n>>k;
        lli ans,t;
        ans=1;
        t=k;
        if(k>n)
        {
            printf("Case %lld: 0\n",test);
            continue;
        }
        ans = 0;
        if(n*n >= k){
            ans = 1;
            for(lli ck = 1; ck <= k; ck++){
                ans = ans * n*n/ck;
                n -= 1;
            }
        }
        printf("Case %lld: %llu\n", test, ans);
    }
}