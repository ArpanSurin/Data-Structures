class Solution:
    def maxAscendingSum(self, nums: List[int]) -> int:
        max_ar = total = nums[0]  # ✅ Initialize both max_ar and total with first element

        for i in range(1, len(nums)):
            if nums[i] > nums[i-1]:  
                total += nums[i]  # ✅ Continue summing if increasing
            else:
                max_ar = max(max_ar, total)  # ✅ Update max_ar if sequence breaks
                total = nums[i]  # ✅ Reset total to new start element
        
        return max(max_ar, total)