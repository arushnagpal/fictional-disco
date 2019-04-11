class Solution {
public:
    int climbStairs(int n) {
        vector<int> coun(n+1,0);
        coun[0]=1;
        coun[1]=1;
        for(int i=2;i<coun.size();i++){
            coun[i]=coun[i-1]+coun[i-2];
        }
        return coun[n];
    }
};