class Solution {
public:
    int minAddToMakeValid(string S) {
        stack <char> stk;
        for(int i=0;i<S.length();i++){
            if(S[i]=='('){
                stk.push(S[i]);
            }
            else if(S[i]==')' && stk.size()!=0 && stk.top()=='('){
                stk.pop();
            }
            else
                stk.push(S[i]);
        }
        return stk.size();
    }
};