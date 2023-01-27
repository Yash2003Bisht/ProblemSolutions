# QUESTION URL: https://www.hackerrank.com/challenges/magic-square-forming/problem
# STATUS: Wrong Answer

s = []
diff = []
for i in range(3):
    s.append(list(map(int, input().split(' '))))

def column():
    sub_diff = []
    for i in s:
        if sum(i) != 15:
            sub_diff.append(i)
    diff.append(sub_diff)

column()

def row():
    for i in range(1):
        sub_diff = []
        for j in range(len(s)):
            if s[i][j] + s[i+1][j] + s[i+2][j] != 15:
                sub_diff.append([s[i][j], s[i+1][j], s[i+2][j]])
    diff.append(sub_diff)

row()

def both_diagonals():
    sub_diff = []
    """Top start to bottom end"""
    if s[0][0] + s[1][1] + s[2][2] != 15:
        sub_diff.append([s[0][0], s[1][1], s[2][2]])

    """Top end to bottom start"""
    if s[0][2] + s[1][1] + s[2][0] != 15:
        sub_diff.append([s[0][2], s[1][1], s[2][0]])
    diff.append(sub_diff)

both_diagonals()

print(diff)

def change():
    pass
