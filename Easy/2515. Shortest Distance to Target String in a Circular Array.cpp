class Solution {
public:
    int closetTarget(vector<string>& words, string target, int startIndex) {
        int n=words.size();
        int result=n+1;
        for(int i=0;i<n;i++){
         if(words[i]==target){
            result=min(result,min(abs(startIndex-i),n-abs(startIndex-i)));
         }
        }
        if(result==n+1) result=-1;
        return result;
    }
};
