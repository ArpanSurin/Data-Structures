class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
      array = []
      greatest = max(candies)
      return [candy + extraCandies >= greatest for candy in candies]