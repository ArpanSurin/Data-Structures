class Solution(object):
    def maxScore(self, s):
        total_ones = s.count('1')
    
        max_score = 0
        zeros = 0
    
        for i in range(len(s) - 1):
            if s[i] == '0':
                zeros += 1
            ones = total_ones - (i + 1 - zeros)
            max_score = max(max_score, zeros + ones)
        return max_score
        