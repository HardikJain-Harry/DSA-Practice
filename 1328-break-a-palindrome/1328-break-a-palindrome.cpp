class Solution {
public:
    string breakPalindrome(string str) {
        if(str.size() == 1) return "";
        for(int i = 0; i < str.size(); i++){
            if(str[i] != 'a' && (i != (str.size()/2))){
                str[i] = 'a';
                return str;
            }
        }
        str[str.size() - 1] = 'b';
        return str;
    }
};