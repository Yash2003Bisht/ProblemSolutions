# QUESTION URL: https://www.codechef.com/problems/CHEFCBA
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.6M

lst = list(map(int, input().split()))
lst.sort()

if lst[0] / lst[1] == lst[2] / lst[3]:
    print("Possible")
else:
    print("Impossible")


