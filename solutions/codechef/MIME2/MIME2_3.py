# DATE: 01/06/2023, 08:11:27
# PROBLEM NAME: Internet Media Types
# PROBLEM URL: https://www.codechef.com/problems/MIME2
# PROBLEM DIFFICULTY RATTING: 1362
# STATUS: wrong answer
# TIME: 0.02
# MEMORY: 9.5M

import os

n, q = map(int, input().split())
extension_supported = {}

for _ in range(n):
    file_name, extension = input().split()
    extension_supported[file_name] = extension

for _ in range(q):
    extension = input().split(".")[-1]

    if extension_supported.get(extension):
        print(extension_supported[extension])
    else:
        print("unknown")


