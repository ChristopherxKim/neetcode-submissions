class Solution {
public:
    bool isPalindrome(string s) {
        int x = 0;
        int y = s.size() - 1;

        while (x < y){
            while (x < y && !isalnum(static_cast<unsigned char>(s[x]))){
                x++;
            }
            while (x < y && !isalnum(static_cast<unsigned char>(s[y]))){
                y--;
            }
            if (tolower(s[x]) != tolower(s[y])){
                return false;
            }
            x++; y--;
        }
        return true;
    }
};
