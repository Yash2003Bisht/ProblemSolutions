# QUESTION URL: https://www.codechef.com/problems/PPSUM

for _ in range(int(input())):
    a, b = map(int, input().split(" "))
    counter = b
    for i in range(a):
        counter += sum(range(1, counter))
    print(counter)

