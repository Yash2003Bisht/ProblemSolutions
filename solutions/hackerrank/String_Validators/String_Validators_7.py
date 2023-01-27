# QUESTION URL: https://www.hackerrank.com/challenges/string-validators/problem
# STATUS: Wrong Answer

if __name__ == '__main__':
    s = input()
    if s.isalnum():
        print(True)
    else:
        print(False)
        
    if s.isalpha():
        print(False)        
    else:
        print(True)
        
        
    if s.isdigit():
        print(False)
    else:
        print(True)
        
    if s.islower():
        print(False)        
    else:
        print(True)
        
        
    if s.isupper():
        print(False)        
    else:
        print(True)
        
    
