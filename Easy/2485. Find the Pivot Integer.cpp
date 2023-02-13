class Solution {
public:
    int pivotInteger(int n) {
        int left = 1, right = n - 1;
        int suml = 1, sumr = n * (n + 1) / 2;
        int mid;
        while(left < right){
            left++;
            suml += left;
            right--;
            sumr -= left;
        }
};
