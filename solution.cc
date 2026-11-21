class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int apl = 0;
        for(int i = 0; i < apple.size(); i++) apl += apple[i];

        sort(capacity.begin(), capacity.end());
        int s = 0;
        int ret = 1;
        for(int i = capacity.size() - 1; i >= 0; i--){
            s += capacity[i];
            if(s >= apl) return ret;
            ret++;
        }

        return -1;
    }
};
