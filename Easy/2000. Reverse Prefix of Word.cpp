class Solution {
public:
    string reversePrefix(string word, char ch) {
        int pivot = word.find(ch);
        if (pivot == -1) {
            return word;
        }
        reverse(word.begin(), word.begin() + pivot + 1);
        return word;
    }
};
