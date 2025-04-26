class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unsigned int x = 0;
        for (int i = 0; i < nums.size(); i++) {
            x = x ^ nums[i];
        }

        // Safely get the rightmost set bit
        unsigned int rightmost = x & (-x);

        int b1 = 0, b2 = 0;
        for (int i = 0; i < nums.size(); i++) {
            if ((unsigned int)nums[i] & rightmost)
                b1 ^= nums[i];
            else
                b2 ^= nums[i];
        }

        return {b1, b2};
    }
};