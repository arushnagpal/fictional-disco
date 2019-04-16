class Solution {
public:
    int hammingDistance(int x, int y) {
        int a = x^y;
        int count=0;
        cout<<a<<endl;
        while(a!=0){
            if(a&1)
                count++;
            a>>=1;
        }
        return count;
    
    }
};