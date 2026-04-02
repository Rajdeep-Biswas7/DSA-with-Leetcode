class Solution:
    def reverse(self, x: int) -> int:
        s = str(abs(x))[::-1]
        num = int(s)

        if x < 0:
            num = -num

        if num < -2**31 or num > 2**31 - 1:
            return 0

        return num
