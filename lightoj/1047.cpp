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

//   ios_base::sync_with_stdio(false);cin.tie(NULL);   // FAST IO

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  int testno;
  cin >> testno;
  FOR(test, 1, testno) {
      int arr[21][3];
    printf("Case %d: ", test);
    int r,g,b,num;
    cin>>num;
    REP(i,num){
        cin >>arr[i][0]>>arr[i][1]>>arr[i][2];
    }
    FOR(i,1,num){
        arr[i][0]+=min(arr[i-1][1],arr[i-1][2]);
        arr[i][1]+=min(arr[i-1][0],arr[i-1][2]);
        arr[i][2]+=min(arr[i-1][0],arr[i-1][1]);
    }
    printf("%d\n", min3(arr[num-1][0],arr[num-1][1],arr[num-1][2]));
  }
  return 0;
}