
class Solution {
public:
    string decodeString(string s) {
        stack<int> number; 
	    stack<string> str; 
	    string ans;
	    int i=0;
		while(i<s.length()){
			if(s[i]<='9' && s[i]>='0'){
				int count=0;
				while(s[i]<='9' && s[i]>='0'){
					count = count*10+(s[i]-'0');
					i++;
				}
				number.push(count);
			}else if(s[i]=='['){
				str.push(ans);
				ans="";
				i++;
			}else if(s[i]==']'){
				string tmp=str.top();
				str.pop();
				int cnt=number.top();
				number.pop();
				for(int j=0; j<cnt; j++){
					tmp += ans;
				}
				ans=tmp;
				i++;
			}else{
				ans+=s[i];
				i++;
			}
		}//while
		return ans;
	    
    }
};