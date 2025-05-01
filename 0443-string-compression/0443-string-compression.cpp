class Solution {
public:
    int compress(vector<char>& chars) {
        int index = 0;
        int i = 0;
        while(i < chars.size()){
            char al = chars[i];
            int count = 0;
            while(i < chars.size() && chars[i] == al){
                i++;
                count++;
            }
            chars[index++] = al;

            if(count > 1){
                string cnt = to_string(count);
                for (char c : cnt) {
                    chars[index++] = c;
                }
            }
        }
        return index;
    }
};