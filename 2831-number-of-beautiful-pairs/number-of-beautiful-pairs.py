class Solution:
    def countBeautifulPairs(self, nums: List[int]) -> int:
        def get_first(n):
            while n>=10:
                n //=10
            return n

        count = 0
        for i in range(len(nums)):
            first = get_first(nums[i])
            for j in range(i+1, len(nums)):
                last = nums[j] % 10
                if math.gcd(first,last) == 1:
                    count += 1
                    print(count)
        return count