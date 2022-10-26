# QUESTION URL: https://www.codechef.com/problems/INTRDSGN

for _ in range(int(input())):
    a, b, c, d = map(int, input().split(" "))
    total_rupee_1 = a + b
    total_rupee_2 = c  + d
    
    if total_rupee_1 > total_rupee_2:
        print(total_rupee_2)
    else:
        print(total_rupee_1)

