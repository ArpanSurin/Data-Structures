class Solution:
    def check(self, nums: List[int]) -> bool:
        if (nums == sorted(nums)):
            return True
        else:
            for k in range(len(nums)):
                rotated_nums = nums[k:] + nums[:k]
                if rotated_nums == sorted(nums):
                    return True
        return False