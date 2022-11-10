# QUESTION URL: https://www.codechef.com/problems/SPLITN
# STATUS: time limit exceeded
# TIME: -
# MEMORY: 9.6M

for _ in range(int(input())):
    n = int(input())
    count = 1
    if (n & (n-1) == 0) and n != 0:
        print(0)
    else:
        for i in range(1, (n//2)+1):
            if ((i & (i-1) == 0) and i != 0) and (n-i & (n-i-1) == 0) and n-i != 0:
                print(count)
                break
            else:
                count += 1


