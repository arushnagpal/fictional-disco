class Solution {
public:
    vector<vector<int>> ans;
    
    void findNumbers(vector<int>& ar, int sum, vector<int>& r, int i) 
        { 
            if (sum < 0) 
                return; 

            if (sum == 0) 
            { 
                ans.push_back(r); 
                return; 
            } 
            while (i < ar.size() && sum - ar[i] >= 0) 
            { 
                r.push_back(ar[i]); 
                findNumbers(ar, sum - ar[i], r, i); 
                i++; 
                r.pop_back(); 
            } 
        } 
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> tempr;
        sort(candidates.begin(),candidates.end());
        findNumbers(candidates, target, tempr, 0); 
        return ans;
    }
};