# DATE: 14/12/2022, 06:05:33
# PROBLEM NAME: Chef and String
# PROBLEM URL: https://www.codechef.com/problems/XYSTR
# PROBLEM DIFFICULTY RATTING: 1124
# STATUS: accepted
# TIME: 0.03
# MEMORY: 9.8M

for _ in range(int(input())):
    s = input()
    xy_count = s.count('xy')
    s = s.replace('xy', '')
    yx_count = s.count('yx')
    print(xy_count + yx_count)

