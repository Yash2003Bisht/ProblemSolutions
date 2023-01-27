# QUESTION URL: https://www.hackerrank.com/challenges/decorators-2-name-directory/problem
# STATUS: Wrong Answer



def person_lister(f):
    def inner(people):
        sorted_people = []
        for i in sorted(people, key=lambda x: x[2]):
            if i[3] == "M":
                respected = "Mr."
            else:
                respected = "Ms."
            sorted_people.append(f"{respected} {i[0]} {i[1]}")
        return sorted_people
    return inner

