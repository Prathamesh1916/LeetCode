class Solution {
public:
    int sumBase(int n, int k) {
        string a = "";
        while(n){
            a += to_string(n%k);
            n/=k;
        }
        reverse(a.begin(), a.end());
        int b = stoi(a);
        int sum = 0;
        while(b){
            sum+=b%10;
            b/=10;
        }
        return sum;
    }
};
