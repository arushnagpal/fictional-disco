class Solution {
public:
    static bool comparator(const vector<int> &o1, const vector<int> &o2 ){
        return (o1[0] - o1[1]) < (o2[0] - o2[1]);
    }
    int twoCitySchedCost(vector<vector<int>>& costs) {
        sort(costs.begin(),costs.end(),comparator);
        int total = 0;
        int n = costs.size() / 2;
        for (int i = 0; i < n; ++i) 
            total += costs[i][0] + costs[i + n][1];
        return total;
    }
};