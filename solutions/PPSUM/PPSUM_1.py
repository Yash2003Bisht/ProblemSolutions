# QUESTION URL: https://www.codechef.com/problems/PPSUM
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9M

for _ in range(int(input())):
    a, b = map(int, input().split(" "))
    counter = b
    for i in range(a):
        counter += sum(range(1, counter))
    print(counter)

