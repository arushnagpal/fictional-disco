class Solution {
public:
    int numSquares(int n) {
        
    int max = (int) sqrt(n);
 
    vector <int> dp(n+1,9999999);
 
    for(int i=1; i<=n; i++){
        for(int j=1; j<=max; j++){
            if(i==j*j){
                dp[i]=1;
            }else if(i>j*j){
                dp[i]=min(dp[i], dp[i-j*j] + 1);
            }
        }
    }
 
    return dp[n];
    }
};