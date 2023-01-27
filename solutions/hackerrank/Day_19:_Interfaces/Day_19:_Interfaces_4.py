# QUESTION URL: https://www.hackerrank.com/challenges/30-interfaces/problem
# STATUS: Accepted



class Calculator(AdvancedArithmetic):
    def divisorSum(self, n):
        result = []
        divisor = 1
        while divisor <= n:
            if n%divisor == 0:
                result.append(divisor)
            divisor += 1
        return sum(result)

