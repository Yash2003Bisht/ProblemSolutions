# QUESTION URL: https://www.codechef.com/problems/FRIEZA
# STATUS: accepted
# TIME: 0.06
# MEMORY: 9.7M

name = ['f', 'r', 'i', 'e', 'z', 'a']


def bad_or_good(a):
    if a in name:
        return 'good'
    return 'bad'


def main(string):
    string_type = None
    r = ''
    count = 0

    for i in string:
        if string_type is None:
            string_type = bad_or_good(i)
            count += 1
            continue

        elif string_type == bad_or_good(i):
            count += 1

        else:
            r += str(count)
            count = 1
            string_type = bad_or_good(i)

    return r + str(count)


for _ in range(int(input())):
    s = input()
    r = main(s)
    print(r)


