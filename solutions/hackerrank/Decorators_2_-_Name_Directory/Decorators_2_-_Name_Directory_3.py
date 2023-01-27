# QUESTION URL: https://www.hackerrank.com/challenges/decorators-2-name-directory/problem
# STATUS: Accepted



def person_lister(f):
    def inner(people):
        return map(f, sorted([[e[0], e[1], int(e[2]), e[3]] for e in people], key=operator.itemgetter(2)))
    return inner

