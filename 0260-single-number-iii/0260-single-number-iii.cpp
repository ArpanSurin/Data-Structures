class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> res;
        int n = nums.size();
        for(int i = 0; i<n; i++){
            int num = count(nums.begin(), nums.end(), nums[i]);
            if (num == 1) { res.push_back(nums[i]); }
        }
        return res;
    }
};