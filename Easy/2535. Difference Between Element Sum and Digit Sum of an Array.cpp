class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        
        int sum = 0;
        int digsum = 0;
        for (int i = 0 ; i < nums.size(); i++){
            sum += nums[i];
            
            while (nums[i] != 0){
                int dig = nums[i] % 10;
                digsum += dig;
                nums[i] /= 10;
            }
        }
        
        return abs(digsum - sum);
    }
};
