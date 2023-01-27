# QUESTION URL: https://www.hackerrank.com/challenges/standardize-mobile-number-using-decorators/problem
# STATUS: Accepted

def wrapper(f):
    def fun(l):
        lst = []
        for i in l:
            if "+91" in i:
                i = i.replace("+91", "")
            elif "91" in i[:2] and len(i[2:]) == 10:
                i = i[:2].replace("91", "") + i[2:]
            elif "0" in i[:1]:
                i = i[:1].replace("0", "") + i[1:]
            lst.append("+91 " + i[:5] + " " + i[5:])
        return f(lst)
    return fun

