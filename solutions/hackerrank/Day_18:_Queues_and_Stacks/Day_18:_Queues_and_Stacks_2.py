# QUESTION URL: https://www.hackerrank.com/challenges/30-queues-stacks/problem
# STATUS: Accepted



class Solution:
    # Write your code here
    
    stack_ = []
    queue_ = []

    def pushCharacter(self, s):
        self.stack_.append(s)

    def enqueueCharacter(self, q):
        self.queue_.append(q)

    def popCharacter(self):
        return self.stack_.pop()

    def dequeueCharacter(self):
        return self.queue_.pop(0)

        
