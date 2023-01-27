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
        var = self.stack_.pop(0)
        return var

    def dequeueCharacter(self):
        var = self.queue_.pop(len(self.queue_)-1)
        return var

        
