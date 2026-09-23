class Solution {
public:
    bool isPalindrome(string s) {
        if (s.size() == 1) return true;
        char *b = &s[0];
        char *e = &s[s.size() - 1];

        while (b<e){
            while (!isalnum(*b)){
                b++;
            }
            while (!isalnum(*e)){
                e--;
            }
            if (tolower(*b) != tolower(*e) && b < e){
                return false;
            }
            b++;
            e--;
        }
        return true;
    }
};
