# QUESTION URL: https://www.hackerrank.com/challenges/30-binary-search-trees/problem
# STATUS: Accepted



    def getHeight(self,root):
        #Write your code here
        if root == None:
            return -1
        return 1 + max(self.getHeight(root.left), self.getHeight(root.right)) 

