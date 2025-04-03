class Solution {
public:
    string toLowerCase(string s) {
        for(char &chr : s){
            chr = tolower(chr);
        }
        return s;
    }
};