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
    printf("Case %d: ", test);
    double ab, area,a1,a2,a3;
    cin >> ab >> a1 >> a2 >> area;
    printf("%.10lf\n", ab * sqrt(area / (1 + area)));
  }
  return 0;
}