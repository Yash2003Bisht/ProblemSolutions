# DATE: 03/08/2022, 04:44:12
# PROBLEM NAME: Puppy and Sum
# PROBLEM URL: https://www.codechef.com/problems/PPSUM
# PROBLEM DIFFICULTY RATTING: 961
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9M

for _ in range(int(input())):
    a, b = map(int, input().split(" "))
    counter = b
    for i in range(a):
        counter += sum(range(1, counter))
    print(counter)

