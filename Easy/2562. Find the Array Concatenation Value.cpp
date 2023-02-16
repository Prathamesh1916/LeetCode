class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long val=0;
        int n = nums.size();
        if(n==1) return nums[0];
        int i=0,j=n-1;
        while(i<j){
            string s = to_string(nums[i]) + to_string(nums[j]);
            val += stoi(s);
            i++;
            j--;
        }
        if(i==j) val += nums[i];
        return val;
    }
};
