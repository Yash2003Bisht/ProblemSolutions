# QUESTION URL: https://www.codechef.com/problems/ATTENDU
# STATUS: wrong answer

print("\n".join(["YES" if (120-int(input())+int(input()))/120*100 >= 75 else "NO" for _ in range(int(input()))]))


