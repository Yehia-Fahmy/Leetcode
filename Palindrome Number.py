class Solution:
    def isPalindrome(self, x: int) -> bool:
        Result = True
        if x > 0:
            y = int(str(x)[::-1])
        if x <= 0:
            y = -1 * int(str(-1 * x)[::-1])
        if x == y:
            Result = True
        else:
            Result = False
        return Result
