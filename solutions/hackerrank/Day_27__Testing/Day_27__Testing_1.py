# QUESTION URL: https://www.hackerrank.com/challenges/30-testing/problem
# STATUS: Accepted


class TestDataEmptyArray:

    def get_array():
        return []

class TestDataUniqueValues:
    def get_array():
        import random
        random.seed(44)
        r1 = random.choice([1,2,3,4])
        r2 = random.choice([5,6,7,8])
        return [r1, r2]
    
    def get_expected_result():
        array = TestDataUniqueValues.get_array()
        return minimum_index(array)

class TestDataExactlyTwoDifferentMinimums:
    
    def get_array():
        import random
        random.seed(44)
        r1 = random.choice([1,2,3,4])
        r2 = random.choice([4])
        return [r1, r2]
    
    def get_expected_result():
        array = TestDataUniqueValues.get_array()
        return minimum_index(array)
