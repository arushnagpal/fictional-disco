class Solution {
public:
    int maxCoins(vector<int>& nums) {
        int N = nums.size();
        nums.insert(nums.begin(), 1);
        nums.insert(nums.end(), 1);
        vector<vector<int>> rangeValues(nums.size(), vector<int>(nums.size(),0));
        
        for (int len = 1; len <= N; ++len) {
            for (int start = 1; start <= N - len + 1; ++start) {
                int end = start + len - 1;
                int bestCoins = 0;
                for (int final = start; final <= end; ++final) {
                    int coins = rangeValues[start][final-1] + rangeValues[final+1][end];   
                    coins += nums[start-1] * nums[final] * nums[end+1]; 
                    if (coins > bestCoins) 
                        bestCoins = coins;
                }
                rangeValues[start][end] = bestCoins;
            }
        }
        return rangeValues[1][N];
    }
};