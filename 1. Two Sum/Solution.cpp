class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> store;
        for(int i = 0; i < nums.size(); ++i){
            int t = target-nums[i];
            if(store.find(t) != store.end()){
                return {i, store[t]};
            }
            store[nums[i]] = i;
        }
        return {};
    }
};