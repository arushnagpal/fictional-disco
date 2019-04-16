class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int diff=0;
        for(int i=0;i<nums.size();i++){
            diff^=nums[i];
        }
        return diff;
    }
};