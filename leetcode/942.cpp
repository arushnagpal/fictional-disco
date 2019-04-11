class Solution {
public:
    vector<int> diStringMatch(string S) {
        vector<int> ans(S.length()+1);
        int min=0,max=S.length(),count=0;
        for(int i=0;i<S.length();i++){
            if(S.at(i)=='I'){
                ans[i]=min++;
            }
            else
                ans[i]=max--;
        }
        ans[S.length()]=min;
    return ans;
    }
};