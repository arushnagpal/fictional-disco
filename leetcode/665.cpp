class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int count=0,pos=-1;
        if(nums.size()==1)
            return true;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                count++;
                pos=i;
            }
        }
        if(count>1)
            return false;
        else{
            if(pos==-1)
                return true;
            if(nums[nums.size()-1]<nums[nums.size()-2])
                return true;
            if(pos==0)
                return true;
            if(nums[pos-1]<nums[pos+1])
                return true;
             if(nums[pos]<nums[pos+2])
                 return true;
            else
                return false;
        }
    }
};