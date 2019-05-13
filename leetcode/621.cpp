class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> map (26,0);
        for (int i=0; i<tasks.size();i++)
            map[tasks[i] - 'A']++;
        sort(map.begin(),map.end());
        int time = 0;
        while (map[25] > 0) {
            int i = 0;
            while (i <= n) {
                if (map[25] == 0)
                    break;
                if (i < 26 && map[25 - i] > 0)
                    map[25 - i]--;
                time++;
                i++;
            }
            sort(map.begin(),map.end());
        }
        return time;
    }
};