# QUESTION URL: https://www.codechef.com/problems/BRACKETS
# STATUS: accepted
# TIME: 0.07
# MEMORY: 9.8M

def f(s):
    balance = 0
    max_balance = 0
    
    for index in range(0, len(s)):
        if s[index] == '(':
            balance += 1
        else:
            balance -= 1
        
        max_balance = max(max_balance, balance)
        
    return max_balance

for _ in range(int(input())):
    a = input()
    num = f(a)
    print('('*num + ')'*num)

