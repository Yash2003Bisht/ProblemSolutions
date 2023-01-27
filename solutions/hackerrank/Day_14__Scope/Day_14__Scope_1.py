# QUESTION URL: https://www.hackerrank.com/challenges/30-scope/problem
# STATUS: Accepted


        self.maximumDifference = 0
	# Add your code here
    def computeDifference(self):
        self.maximumDifference = abs(max(self.__elements) - min(self.__elements))
    
