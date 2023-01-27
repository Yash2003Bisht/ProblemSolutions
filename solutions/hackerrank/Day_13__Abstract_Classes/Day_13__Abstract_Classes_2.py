# QUESTION URL: https://www.hackerrank.com/challenges/30-abstract-classes/problem
# STATUS: Accepted



#Write MyBook class
class MyBook(Book):
    def __init__(self, title, author, price):
        super().__init__(title, author)
        self.price = price
        
    def display(self):
        print(f"Title: {self.title}")
        print(f"Author: {self.author}")
        print(f"Price: {self.price}")
        
