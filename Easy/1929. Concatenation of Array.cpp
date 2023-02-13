class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> result;
        for(int j = 0; j < nums.size(); j++){
            result.push_back(nums[j]);
        }
        for(int j = 0; j < nums.size(); j++){
            result.push_back(nums[j]);
        }
        return result;
    }
};
