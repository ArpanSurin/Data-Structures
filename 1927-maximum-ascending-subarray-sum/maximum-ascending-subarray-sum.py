class Solution:
    def maxAscendingSum(self, nums: List[int]) -> int:
        max_ar = total = nums[0]
        for i in range(1, len(nums)):
            if(nums[i] > nums[i-1]):
                total += nums[i]
            else:
                max_ar = max(max_ar, total)
                total = nums[i]
        max_ar = max(max_ar, total)
        return max_ar