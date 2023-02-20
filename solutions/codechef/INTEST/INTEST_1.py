# DATE: 02/11/2022, 07:15:32
# PROBLEM NAME: Enormous Input Test
# PROBLEM URL: https://www.codechef.com/problems/INTEST
# PROBLEM DIFFICULTY RATTING: 464
# STATUS: accepted
# TIME: 1.65
# MEMORY: 9.6M

# We have populated the solutions for the 10 easiest problems for your support.
# Click on the SUBMIT button to make a submission to this problem.
#Note that it's python3 Code. Here, we are using input() instead of raw_input().
#You can check on your local machine the version of python by typing "python --version" in the terminal.

(n, k) = map(int, input().split(' '))

ans = 0

for i in range(n):
	x = int(input())
	if x % k == 0:
		ans += 1

print(ans)	



