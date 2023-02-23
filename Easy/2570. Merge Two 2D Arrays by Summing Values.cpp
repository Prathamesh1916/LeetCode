class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>> res;
        unordered_map<int, int> mp;
        for(auto num : nums1){
            mp[num[0]] += num[1];
        }
        for(auto num : nums2){
            mp[num[0]] += num[1];
        }
        for(auto it : mp){
            res.push_back({it.first, it.second});
        }
        sort(res.begin(), res.end());
        return res;
    }
};
