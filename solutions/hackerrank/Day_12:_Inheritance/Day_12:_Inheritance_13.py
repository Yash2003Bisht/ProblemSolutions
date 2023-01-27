# QUESTION URL: https://www.hackerrank.com/challenges/30-inheritance/problem
# STATUS: Wrong Answer



class Student(Person):
    #   Class Constructor
    #   
    #   Parameters:
    #   firstName - A string denoting the Person's first name.
    #   lastName - A string denoting the Person's last name.
    #   id - An integer denoting the Person's ID number.
    #   scores - An array of integers denoting the Person's test scores.
    #
    # Write your constructor here
    def __init__(self, firstName, lastName, idNumber, score):
        super().__init__(firstName, lastName, idNumber)
        self.score = score
    def calculate(self):
        from functools import reduce
        grade = reduce(lambda x,y: x+y, self.score)/2
        if grade >90 and grade < 100:
            return "O"
        elif grade > 80 and grade <= 90:
            return "E"
        elif grade > 70 and grade <= 80:
            return "A"
        elif grade > 55 and grade <= 70:
            return "P"
        elif grade >= 40 and grade <= 55:
            return "D"
        elif grade < 40:
            return "T"
        
    #   Function Name: calculate
    #   Return: A character denoting the grade.
    #
    # Write your function here

