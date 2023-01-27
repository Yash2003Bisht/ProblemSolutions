# QUESTION URL: https://www.hackerrank.com/challenges/30-interfaces/problem
# STATUS: Accepted



class Calculator(AdvancedArithmetic):
    def divisorSum(self, n):
        result = 0
        for i in range(1,n+1):
            if n%i == 0:
                result += i
        return result
            
