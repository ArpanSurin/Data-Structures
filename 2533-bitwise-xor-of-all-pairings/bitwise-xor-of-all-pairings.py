class Solution:
    def xorAllNums(self, nums1: List[int], nums2: List[int]) -> int:
        x1 = x2 = 0
        if len(nums1) % 2 != 0:
            for num in nums2:
                x1 ^= num
        if len(nums2) % 2 != 0:
            for num in nums1:
                x2 ^= num
        return x1^x2