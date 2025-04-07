class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        
        string temp = s + s;
        string newString = temp.substr(1, temp.size() - 2);

        return (newString.find(s) != string::npos);
    }

};