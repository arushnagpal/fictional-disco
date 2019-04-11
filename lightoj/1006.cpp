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

int a,b,c,d,e,f; 
int arr[100000];
int fn(int n ) {

    if( n == 0 ) return arr[0];
    if( n == 1 ) return arr[1];
    if( n == 2 ) return arr[2];
    if( n == 3 ) return arr[3];
    if( n == 4 ) return arr[4];
    if( n == 5 ) return arr[5];
    for(int i=6;i<=n;i++){
        arr[i]=arr[i-1]% 10000007+arr[i-2]% 10000007+arr[i-3]% 10000007+arr[i-4]% 10000007+arr[i-5]% 10000007+arr[i-6]% 10000007;
    }
    return arr[n];
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    lli testno,n,k;
    cin>>testno;
    FOR(test,1,testno){
        int n;
        cin>>a>>b>>c>>d>>e>>f>>n;
        arr[0]=a;
        arr[1]=b;
        arr[2]=c;
        arr[3]=d;
        arr[4]=e;
        arr[5]=f;

        printf("Case %lld: %llu\n", test, fn(n) % 10000007);
    }
}