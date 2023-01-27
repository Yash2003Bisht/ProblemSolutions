# QUESTION URL: https://www.hackerrank.com/challenges/30-scope/problem
# STATUS: Accepted


        self.maximumDifference = 0
	# Add your code here
    def computeDifference(self):
        for i in range(len(self.__elements)):
            for a in self.__elements:
                if abs(self.__elements[i] - a) > self.maximumDifference:
                    self.maximumDifference = abs(self.__elements[i] - a)
        
