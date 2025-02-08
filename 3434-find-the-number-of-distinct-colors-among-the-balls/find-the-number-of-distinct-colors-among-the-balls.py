class Solution:
    def queryResults(self, limit: int, queries: List[List[int]]) -> List[int]:
        ball_colors = {}
        unique_colors = set()
        result = []
        for x, y in queries:
            if x in ball_colors:
                old_color = ball_colors[x]
                if old_color != y:
                    ball_colors[x] = y

                if old_color not in ball_colors.values():
                    unique_colors.discard(old_color)
            else:
                ball_colors[x] = y

            unique_colors.add(y)
            result.append(len(unique_colors))
        return result