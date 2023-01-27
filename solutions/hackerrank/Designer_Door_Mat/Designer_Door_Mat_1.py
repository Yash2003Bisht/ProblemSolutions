# QUESTION URL: https://www.hackerrank.com/challenges/designer-door-mat/problem
# STATUS: Accepted

# Enter your code here. Read input from STDIN. Print output to STDOUT
N, M = map(int, input().split(" "))
pattern = [('.|.'*(2*i + 1)).center(M, "-") for i in range(N//2)]
print("\n".join(pattern) + "\n" + "WELCOME".center(M, "-") + "\n" + "\n".join(pattern[::-1]))


