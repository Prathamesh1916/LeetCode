class Solution {
public:
    int finalValueAfterOperations(vector<string>& nums) {
        int res = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i]=="++X"||nums[i]=="X++"){
                res++;
            }
            else{
                res--;
            }
        }
        return res;
    }
};
