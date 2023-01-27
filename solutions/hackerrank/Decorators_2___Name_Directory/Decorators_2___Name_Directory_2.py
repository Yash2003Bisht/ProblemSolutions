# QUESTION URL: https://www.hackerrank.com/challenges/decorators-2-name-directory/problem
# STATUS: Wrong Answer



def person_lister(f):
    def inner(people):
        return map(f, sorted(people, key=operator.itemgetter(2)))
    return inner

