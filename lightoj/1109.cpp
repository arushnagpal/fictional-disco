#include<bits/stdc++.h>
#define pb      push_back
#define lli long long int
#define vlli    vector<lli>
#define plli    vector<pair<lli,lli> >
#define mp      make_pair
#define all(v)  v.begin(),v.end()
#define fileinput freopen("input.txt", "r", stdin);
#define fileoutput freopen("output.txt", "w", stdout);
using namespace std;


bool compfn(const pair<int,int> &a, const pair<int,int> &b){
        if(a.second<b.second){
            return true;
        }
        if(a.second==b.second && a.first>b.first){
            return true;
        }
        else{
            return false;
        }
    };

int main(){
    vector<pair<int,int> > divs(1001);
    divs[0]=mp(-1,-1);
    for(int i=1;i<=1000;i++){
        divs[i]=mp(i,0);
    }
    for(int i=1;i<=1000;i++){
        int mul=1;
        while(i*mul<=1000){
            divs[i*mul].second=divs[i*mul].second+1;
            mul++;
        }
    }
    sort(divs.begin(),divs.end(),compfn);
    // for(int iter=0;iter<=divs.size();iter++){
    //     cout<<divs[iter].first<<"  "<<divs[iter].second<<endl;
    // }

int t,n,inp;
cin>>t;
n=t;
while(t--){
    cin>>inp;
    printf("Case %d: %d\n",n-t,divs[inp].first);
}
}
