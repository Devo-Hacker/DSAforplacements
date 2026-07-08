class Solution {
    public boolean detectCapitalUse(String word) {
        char Uppercase = 0;
        for(int i=0; i< word.length(); i++){
            if(Character.isUpperCase(word.charAt(i))){
                Uppercase++;
            }
        }
        return Uppercase == word.length() || Uppercase == 0 || (Uppercase == 1 && Character.isUpperCase(word.charAt(0)));
    }
}