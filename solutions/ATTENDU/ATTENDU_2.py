# QUESTION URL: https://www.codechef.com/problems/ATTENDU
# STATUS: accepted

# pythonic way
print("\n".join(["YES" if (120-int(input())+input().count('1'))/120*100 >= 75 else "NO" for _ in range(int(input()))]))


