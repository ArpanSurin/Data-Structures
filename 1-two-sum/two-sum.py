class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        hashMap = {}
        for index,val in enumerate(nums):
            diff = target - val
            if diff in hashMap:
                return (index, hashMap[diff])
            hashMap[val] = index