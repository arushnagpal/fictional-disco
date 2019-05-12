class Solution {
public:
    vector<string> ans;
    vector<string> generateParenthesis(int n) {
    
        generate("",0,0,n);
        return ans;
    }
    
    void generate(string str, int open, int close, int n){
        if(str.length()==2*n){
            ans.push_back(str);
            return;
        }
        if(open<n){
            string s=str+'(';
            generate(s,open+1,close,n);
        }
            
        if(close<open){
            string s=str+')';
            generate(s,open,close+1,n);
        }
            
        
    }
};