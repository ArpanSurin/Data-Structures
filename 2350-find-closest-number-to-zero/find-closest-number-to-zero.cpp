class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int closest = nums[0];
        for(int i=0; i<nums.size(); i++){
            if(abs(nums[i]) < abs(closest)){
                closest = nums[i];
            }
            else if(abs(nums[i]) == abs(closest)){
                if (nums[i] > closest){
                    closest = nums[i];
                }
            }
    }
    return closest;
    };
};