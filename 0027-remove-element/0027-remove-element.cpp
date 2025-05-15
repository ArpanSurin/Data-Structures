class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == val){
                auto newar = remove(nums.begin(), nums.end(), val);
                nums.erase(newar, nums.end());
            }
        }
        return nums.size();
    }
};