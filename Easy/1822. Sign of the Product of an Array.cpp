class Solution {
public:
    int arraySign(vector<int>& nums) {
       long double answer = 1;
        for(int i=0;i<nums.size();i++)
        {
            answer*=nums[i];
        }
        if(answer>0) {
            return 1;
        }
        else if(answer<0){
            return -1;
        }
        else {
            return 0;
        }
    }
};
