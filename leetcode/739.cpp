class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        stack <int> stk;
        vector<int> ans;
        ans.resize(T.size());
        for(int i=T.size()-1;i>=0;i--){
            while(!stk.empty() && T[i]>=T[stk.top()])
                stk.pop();
            if(stk.empty())
                ans[i]=0;
            else
                ans[i]=stk.top()-i;
        stk.push(i);
        }
        return ans;
    }
};