# QUESTION URL: https://www.codechef.com/problems/MISSP
# STATUS: wrong answer

for _ in range(int(input())):
    count = 0
    for _ in range(int(input())):
        n = int(input())
        count += n%2
    print(count)
    

