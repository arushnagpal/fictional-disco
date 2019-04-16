class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map <int,int> countmap;
        for(int i=0;i<nums.size();i++){
            // if(!countmap[nums[i]])
            //     countmap[nums[i]]=1;
            // else
                countmap[nums[i]]++;
        if(countmap[nums[i]]>nums.size()/2){
            return nums[i];
        }
        }
        return nums[0];
    }
};