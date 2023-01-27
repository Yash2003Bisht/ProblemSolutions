# QUESTION URL: https://www.hackerrank.com/challenges/string-validators/problem
# STATUS: Runtime Error

if __name__ == '__main__':
    s = input()
    if s.isalnum():
        print(True)
    else:
        print(False)
        
    if s.isalpha():
        print(True)
    else:
        print(False)
        
    if s.isdigit():
        print(True)
    else:
        print(False)
        
    if s.islower():
        print(True)
    else:
        print(False)
        
    if s.issuper():
        print(True)
    else:
        print(False)
    
