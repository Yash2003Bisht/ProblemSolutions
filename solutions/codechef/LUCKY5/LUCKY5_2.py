# DATE: 30/10/2023, 08:54:22
# PROBLEM NAME: Lucky Long
# PROBLEM URL: https://www.codechef.com/problems/LUCKY5
# PROBLEM DIFFICULTY RATTING: 1478
# STATUS: accepted
# TIME: 0.11
# MEMORY: 8.8M

t=int(input())
i=0
while i<t:
    s=input().strip()
    cnt=0
    for j in s:
        if j!="4" and j!="7":
            cnt+=1
    print(cnt)
    i+=1


