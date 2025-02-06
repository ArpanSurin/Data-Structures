class Solution:
    def tupleSameProduct(self, nums: List[int]) -> int:
        prod_map = defaultdict(int)
        count = 0
        n = len(nums)
        for i in range(n):
            for j in range(i + 1, n):
                product = nums[i] * nums[j]
                count += prod_map[product] * 8
                prod_map[product] += 1
        return count 