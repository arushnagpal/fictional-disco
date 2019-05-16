class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map <int,int> occur;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (occur.find(complement)!=occur.end()) {
            vector <int> ans={occur[complement],i};
            return ans;
        }
        occur[nums[i]]= i;
    }
        vector<int> v;
         return v;
    }
};