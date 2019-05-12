class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int sets = 1<<nums.size();
        vector< vector<int> > ans;
        for(int i=0;i<sets;i++){
            vector <int> temp;
            for (int j = 0; j < nums.size(); j++) 
            { 
                
                // Check if jth bit in the i is set. If the bit 
                // is set, we consider jth element from set 
                if ((i & (1 << j)) != 0) 
                    temp.push_back(nums[j]); 
            } 
            ans.push_back(temp);
        }
        return ans;
    }
    
};