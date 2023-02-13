class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int> result;
        sort(nums[0].begin(), nums[0].end());
        for (int i = 1; i < nums.size(); i++) {
            vector<int> temp;
            sort(nums[i].begin(), nums[i].end());
            set_intersection(nums[0].begin(), nums[0].end(), nums[i].begin(), nums[i].end(), back_inserter(temp));
            nums[0] = temp;
        }
        return nums[0];
    }
};
