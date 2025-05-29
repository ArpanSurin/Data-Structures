use std::mem::swap;

impl Solution {
    pub fn move_zeroes(nums: &mut Vec<i32>) {
        let mut n = 0;
        let len = nums.len();
        for i in 0..len{
            if (nums[i] != 0){
                (nums[i], nums[n]) = (nums[n], nums[i]);
                n += 1;
            }
        }
    }
}