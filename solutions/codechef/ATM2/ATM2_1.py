# QUESTION URL: https://www.codechef.com/problems/ATM2
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.7M

for _ in range(int(input())):
    n, k = map(int, input().split(" "))
    a = map(int, input().split(" "))
    counter = ''
    for i in a:
        if i <= k:
            counter += '1'
            k -= i
        else:
            counter += '0'
    print(counter)

