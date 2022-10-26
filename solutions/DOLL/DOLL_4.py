# QUESTION URL: https://www.codechef.com/problems/DOLL

for _ in range(int(input())):
    n, k = map(int, input().split(" "))
    h = list(map(int, input().split(" ")))
    minimum_shot = [1 for i in h if i > k]
    print(sum(minimum_shot))

