class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        list.sort(nums)
        n = len(nums)
        return nums[n//2]