# QUESTION URL: https://www.codechef.com/problems/TREE2
# STATUS: accepted
# TIME: 0.43
# MEMORY: 30.2M

for _ in range(int(input())):
    n = int(input())
    a = set(filter((0).__ne__, map(int, input().split(" "))))
    print(len(a))



