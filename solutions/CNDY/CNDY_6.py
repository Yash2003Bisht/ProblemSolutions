# QUESTION URL: https://www.codechef.com/problems/CNDY
# STATUS: accepted
# TIME: 0.06
# MEMORY: 10M

for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    a_set = set(a)
    
    for i in a_set:
        if a.count(i) >= 3:
            print("No")
            break
    
    else:
        print("Yes")


