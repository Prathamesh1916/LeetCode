class Solution {
public:
    int countAsterisks(string s) {
        int counta = 0, countl = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '|'){
                countl++;
            }
            if(countl % 2 == 0){
                if(s[i] == '*'){
                    counta++;
                }
            }
        }
        return counta;
    }
};
