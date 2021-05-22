class Solution:
    def factorial(self, N):
        result = 1
        k = N
        while(k>0):
            result = result * k
            k -= 1
        return result

t = Solution()
print(t.factorial(10))
