class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int greatest = 0;
        vector<bool> result;
        for (int i = 0; i < candies.size(); i++) {
            if (greatest < candies[i]) {
                greatest = candies[i];
            }
        }
        for (int i = 0; i < candies.size(); i++) {
            result.push_back(candies[i] + extraCandies >= greatest);
        }
        return result;
    }
};