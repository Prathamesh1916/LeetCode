class Solution {
public:
    bool divideArray(vector<int>& nums) {
        bool flag = false;
        if(nums.size()%2 == 0){
            sort(nums.begin(), nums.end());
            int left = 0;
            int right = nums.size() - 1;
            while(left<right){
                if(nums[left] == nums[left+1]){
                    flag = true;
                    left+=2;
                }
                if(nums[right] == nums[right-1]){
                    flag = true;
                    right-=2;
                }
                else{
                    flag = false;
                    break;
                }
            }
        }
        return flag;
    }
};
