# QUESTION URL: https://www.codechef.com/problems/ATTENDU
# STATUS: accepted
# TIME: 0.02
# MEMORY: 9.6M

# pythonic way
print("\n".join(["YES" if (120-int(input())+input().count('1'))/120*100 >= 75 else "NO" for _ in range(int(input()))]))


