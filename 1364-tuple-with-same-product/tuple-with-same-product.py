class Solution:
    def tupleSameProduct(self, nums: List[int]) -> int:
        prod_map = defaultdict(int)  # ✅ Corrected defaultdict syntax
        count = 0
        n = len(nums)
        
        for i in range(n):
            for j in range(i + 1, n):
                product = nums[i] * nums[j]
                count += prod_map[product] * 8  # ✅ Valid tuple count update
                prod_map[product] += 1  # ✅ Store product frequency
        
        return count