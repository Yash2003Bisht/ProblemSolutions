# QUESTION URL: https://www.hackerrank.com/challenges/calendar-module/problem
# STATUS: Accepted

# Enter your code here. Read input from STDIN. Print output to STDOUT
import calendar
d,m,y = list(map(int, input().split(' ')))
weeks = ["MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY", "SATURDAY", "SUNDAY"]
print(weeks[calendar.weekday(y,d,m)])
