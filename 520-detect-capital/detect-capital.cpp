class Solution {
public:
    bool detectCapitalUse(string word) {
        char Uppercase = 0;
        for(int i=0; i<word.size(); i++){
            if(isupper(word[i])){
                Uppercase++;
            }
        }
        return Uppercase == word.size() || Uppercase == 0 || (Uppercase == 1 && isupper(word[0]));
    }
};