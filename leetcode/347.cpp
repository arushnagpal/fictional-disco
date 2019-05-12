class Solution {
public:
    static bool comparator(const pair<int,int> &a,const pair<int,int> &b){
        return a.second>b.second;
    }
        
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for(int i=0;i<nums.size();i++){
            // cout<<"ststuus "<<!freq[nums[i]]<<endl;
            if(freq.find(nums[i])==freq.end()){
                freq[nums[i]] = 1;
            }
            else{
                freq[nums[i]] = freq[nums[i]]+1;    
            }
            
        // cout<<"freq of "<<nums[i]<<" changed to "<<freq[nums[i]]<<endl;
        }
        
        vector<pair<int,int> > pq;
        unordered_map<int,int>::iterator it;
        for(it=freq.begin();it!=freq.end();it++){
            pq.push_back(make_pair(it->first,it->second));
            // cout<<"freq of "<<it->first<<" is "<<it->second<<endl;
        }
        vector<int> ans;
        sort(pq.begin(),pq.end(),comparator);
        for(int i=0;i<k;i++){
            ans.push_back(pq[i].first);
        }
        return ans;
    }
};