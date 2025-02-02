class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
      array = []
      greatest = max(candies)
      for i in range(len(candies)):
        if(candies[i] + extraCandies >= greatest):
            array.append(True)
        else:
            array.append(False)
      return array