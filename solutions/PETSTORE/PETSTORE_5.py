# QUESTION URL: https://www.codechef.com/problems/PETSTORE
# STATUS: accepted
# TIME: 0.04
# MEMORY: 10.5M

for _ in range(int(input())):
    n = int(input())
    a = input()
    a_set = set(a)

    for value in a_set:
        if value != " " and a.count(value) % 2 != 0:
            print("NO")
            break
    else:
        print("YES")



