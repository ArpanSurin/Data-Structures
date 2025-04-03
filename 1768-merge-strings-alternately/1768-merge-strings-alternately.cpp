class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int k = 0, j = 0, i = 0;
        int m = word1.size();
        int n = word2.size();
        char* result = (char*)malloc((m + n +1) * sizeof(char));
        while(i<m && j<n){
            result[k++] = word1[i++];
            result[k++] = word2[j++];
        }

        while(i<m){
            result[k++] = word1[i++];
        }

        while(j<n){
            result[k++] = word2[j++];
        }
        result[k] = '\0';
        return result;
    }
};