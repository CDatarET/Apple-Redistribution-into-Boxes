class Solution:
    def minimumBoxes(self, apple: List[int], capacity: List[int]) -> int:
        apl = sum(apple)
        x = sorted(capacity)
        s = 0
        ret = 1
        for i in range(len(x) - 1, -1, -1):
            s += x[i]
            if s >= apl:
                return ret
            
            ret += 1
            
