class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int, int> freq;
        for(int i=0;i<nums.size();i++){
            if(freq.find(nums[i])==freq.end())
                freq[nums[i]]=1;
            else{
                return nums[i];
                break;
            }
        }
        return 0;
    }
};