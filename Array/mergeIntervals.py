class Solution:
    def merge(self, intervals):
        intervals.sort()
        result = []
        i = 0
        for a in intervals:
            if(i-1>=0 and a[0]<=result[i-1][1]):
                result[i-1][1] = max(a[1],result[i-1][1])
            else:
                result.append(a)
                i += 1
        return result

a = Solution()
print(a.merge([[1,3],[2,6],[8,10],[15,18]]))
            