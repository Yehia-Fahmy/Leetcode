class Solution:
    def reverse(self, x: int) -> int:
        if x > 0:  # positive numbers
            a = int(str(x)[::-1])
        if x <= 0:
            a = -1 * int(str(x)[::-1])
        return a
