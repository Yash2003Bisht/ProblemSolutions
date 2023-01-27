# QUESTION URL: https://www.hackerrank.com/challenges/30-dictionaries-and-maps/problem
# STATUS: Runtime Error

# Enter your code here. Read input from STDIN. Print output to STDOUT
n = int(input())
dict_lst = [input() for _ in range(n*2)]
dict_ = {}
name = []
for i in dict_lst:
    try:
        var = i.split()
        dict_.update({var[0]: var[1]})

    except IndexError:
        name.append(var[0])

var = list(dict_.keys())
for i in range(0, len(name)):
    if dict_.get(name[i]) != None:
        print(f"{var[i]}={dict_.get(name[i])}")
    else:
        print("Not found")
