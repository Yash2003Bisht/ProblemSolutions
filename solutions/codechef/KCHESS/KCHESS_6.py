# DATE: 07/08/2023, 08:45:17
# PROBLEM NAME: Knight Chess
# PROBLEM URL: https://www.codechef.com/problems/KCHESS
# PROBLEM DIFFICULTY RATTING: 1420
# STATUS: accepted
# TIME: 0.75
# MEMORY: 78.6M

def get_knight_moves(a, b):
    moves = []

    moves.append([a-2, b-1])
    moves.append([a-2, b+1])
    moves.append([a+2, b-1])
    moves.append([a+2, b+1])
    moves.append([a-1, b+2])
    moves.append([a+1, b+2])
    moves.append([a-1, b-2])
    moves.append([a+1, b-2])
    
    return moves


for _ in range(int(input())):
    n = int(input())
    knights_moves = []
    
    for __ in range(n):
        x, y = map(int, input().split())
        knights_moves.extend(get_knight_moves(x, y))
        
    a, b = map(int, input().split())

    if [a, b] in knights_moves:
        print("YES")
    else:
        print("NO")


