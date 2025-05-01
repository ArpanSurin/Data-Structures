class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max_alt = 0, alt = 0;
        for(int i=0 ; i<gain.size(); i++){
            alt += gain[i];
            max_alt = max(max_alt, alt);
        }
        return max_alt;
    }
};