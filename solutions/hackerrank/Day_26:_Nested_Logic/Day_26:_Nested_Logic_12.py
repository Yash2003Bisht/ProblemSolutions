# QUESTION URL: https://www.hackerrank.com/challenges/30-nested-logic/problem
# STATUS: Compilation error

# # Enter your code here. Read input from STDIN. Print output to STDOUT
# d1, m1, y1 = [int(i) for i in input().split(" ")]
# d2, m2, y2 = [int(i) for i in input().split(" ")]

# if (d1, m1, y1) <= (d2, m2, y2):
#     print(0)
# elif (m1,y1) == (m2,y2):
#     print(15*(d1-d2))
# elif y1 == y2:
#     print(500*(m1-m2))
# else:
#     print(10000)
# # check the disscusion tab and mathc the coment solutuon to this
[da, ma, ya] = [int(x) for x in raw_input().strip().split(" ")]
[de, me, ye] = [int(x) for x in raw_input().strip().split(" ")]
if ya > ye:
    print 10000
elif ma > me:
    print 500 * (ma - me)
elif da > de:
    print 15 * (da - de)
else:
    print 0
