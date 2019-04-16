class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        int nonzeropos=0;
        while(i<nums.size()){
            if(nums[i]!=0){
                nums[nonzeropos++]=nums[i];
            }
            i++;
        }
        while(nonzeropos<nums.size()){
            nums[nonzeropos++]=0;
        }
    
    }
};