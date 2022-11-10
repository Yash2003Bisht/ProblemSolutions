# QUESTION URL: https://www.codechef.com/problems/MISSP
# STATUS: wrong answer
# TIME: 0.08
# MEMORY: 9.6M

for _ in range(int(input())):
    count = 0
    for _ in range(int(input())):
        n = int(input())
        count += n%2
    print(count)
    

