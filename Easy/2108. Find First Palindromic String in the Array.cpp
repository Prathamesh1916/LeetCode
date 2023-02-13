class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        vector<string> revwords;
        string s;
        for (int i = 0; i < words.size(); i++) {
            string temp = words[i];
            reverse(temp.begin(), temp.end());
            revwords.push_back(temp);
        }
        for (int i = 0; i < words.size(); i++) {
            if (words[i] == revwords[i]) {
                s = words[i];
                break;
            }
        }
        return s;
    }
};
