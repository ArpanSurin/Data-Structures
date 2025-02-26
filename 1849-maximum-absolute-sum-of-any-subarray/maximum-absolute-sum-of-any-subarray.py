class Solution:
    def maxAbsoluteSum(self, nums: List[int]) -> int:
        sum, minSum, maxSum = 0, 0, 0
        for num in nums:
            sum += num
            maxSum = max(sum, maxSum)
            minSum = min(sum, minSum)
        return abs(maxSum - minSum)